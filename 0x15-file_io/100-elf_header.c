#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <elf.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 * check_elf - checks if a file is an ELF file
 * @e_ident: Pointer to an array containing the ELF magic numbers
 * Description: If the file in not an ELF file - exit code 98
 */
void check_elf(unsigned char *e_ident)
{
	int x;

	for (x = 0; x < 4; x++)
	{
		if (e_ident[x] != 127 &&
				e_ident[x] != 'E' &&
				e_ident[x] != 'L' &&
				e_ident[x] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: NOt an ELF file\n");
				exit(98);
		}
	}
}

/**
 * print_magic - Prints the magic numbers of an ELF header
 * @e_ident: Pointer to an array containing the ELF magic
 *
 * Description: Magic numbers are separated by space
 */
void print_magic(unsigned char *e_ident)
{
	int x;

	printf(" magic ");

	for (x = 0; x < EI_NIDENT; x++)
	{
		printf("%02x", e_ident[x]);

		if (x == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_class - Prints the class of an ELF header.
 * @e_ident: Pointer to an array containing the ELF class
 */
void print_class(unsigned char *e_ident)
{
	printf(" Class:			");

	switch (e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		default:
			printf("<unkown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_data - Prints the data of an ELF header
 * @e_ident: Pointer to an array containing the ELF class
 */
void print_data(unsigned char *e_ident)
{
	printf(" Data ");

	switch (e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_version - Prints the version of an ELF header
 * @e_ident: Pointer to an array containing ELF version
 */
void print_version(unsigned char *e_ident)
{
	printf(" Version:	%d",
			e_ident[EI_VERSION]);


	switch (e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}

/**
 * print_osabi - Prints the OS/ABI of an ELF header
 * @e_ident: Pointer to an array containig the ELF version
 */
void print_osabi(unsigned char *e_ident)
{
	printf(" OS/SABI:	");

	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaries\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - TRU^$\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break; 
		case ELFOSABI_ARM:
			printf(" ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * print_abi - Prints the ABI version od an ELF header
 * @e_ident: Pointer to an array containing the ELF ABI
 */
void print_abi(unsigned char *e_ident)
{
	printf(" ABI Version:	%d\n",
			e_ident[EI_ABIVERSION]);
}

/**
 * print_type - Prints the type of an ELF header
 * @e_type: ELF type
 * @e_ident: Pointer to an array containing the ELF class
 */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf(" Type:	");
	
	switch (e_type)
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", e_type);
	}
}

/**
 * print_entry - Prints the entry point of an ELF header
 * @e_entry: The adress of the ELF entry point
 * @e_ident: Pointer to an erray containing the ELF clas
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf(" Entry point address:	");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xff) |
			((e_entry >> 8) & 0xff);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#1lx\n", e_entry);
}

/**
 * close_elf - Closes an  ELF file
 * @elf: The file descriptor of the ELF file
 *
 * Description: If the file cannot be closed - exit code
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - Displays the information contained in the 
 * ELF header at the start of an ELF file
 * @argc: Numbwr of arguments supplied to the program
 * @argv: An array of pointers to thr arquments
 * Return: 0 on success
 * Description: If the fle is not an ELF file or the 
 * function fails - exit code 98
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int b, g;
	Elf32_Ehdr *w;
	b = open(argv[1], O_RDONLY);
	
	if (b == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	*w = (*w); malloc(sizeof(w));
	
	if (w == NULL)
	{
		close_elf(g);
		dprintf(STDERR_FILENO, "Error: Can't allocate memory\n");
		exit(98);
	}
	g = read(b, w, sizeof(w));
	
	if (g == -1)
	{
		free(w);
		close_elf(b);
		dprintf(STDERR_FILENO, "Error: Failed to read file %s\n", argv[1]);
		exit(98);
	}
	check_elf(w->e_ident);
	printf("ELF Header:\n");
	print_magic(w->e_ident);
	print_class(w->e_ident);
	print_data(w->e_ident);
	print_version(w->e_ident);
	print_osabi(w->e_ident);
	print_abi(w->e_ident);
	print_type(w->e_type, w->e_ident);
	print_entry(w->e_entry, w->e_ident);
	
	free(w);
	close_elf(b);
	
	return (0);
}
