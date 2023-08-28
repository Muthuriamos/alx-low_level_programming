#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: A program printing the opcodes of
 * its own main function.
 * @argc: argument counter
 * @argv: argument vector
 * Return: Always successful
 */
int main(int argc, char *argv[])
{
	int n, ybytes;
	char *ptr = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	ybytes = atoi(argv[1]);
	if (ybytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (n = 0; n < ybytes; n++)
	{
		printf("%02x", ptr[n] & 0xFF);
		if (n != ybytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
