#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - Reads a text and prints it to POSIX stdout
 * @filename: A pointer to the name of the file.
 * @letters: The nummber of letters to be read and written by the function
 *
 * Return: If the function fails or file ic NULL - 0.
 * 0/w - the actual number of bytes the function can read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t b, g, k;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	b = open(filename, O_RDONLY);
	if (b == -1)
	{
		free(buffer);
		close(b);
		return (0);
	}

	g = read(b, buffer, letters);
	if (b == -1)
	{
		free(buffer);
		close(b);
		return (0);
	}
	k = write(STDOUT_FILENO, buffer, g);
	if (k == -1 || k != g)
	{
		free(buffer);
		close(b);
		return (0);
	}

	free(buffer);
	close(b);

	return (g);
}
