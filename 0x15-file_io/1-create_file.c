#include "main.h"

/**
 * create_file - creates an array of chars, and initializes
 * @filename: name of the file to create
 * @text_content: A NULL-terminated string to write to the filename
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int b, g, k = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (k = 0; text_content[k];)
			k++;
	}

	b = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	g = write(b, text_content, k);

	if (b == -1 || g == -1)
		return (-1);

	close(b);

	return (1);
}
