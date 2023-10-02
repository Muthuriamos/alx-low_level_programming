#include "main.h"

/**
 * custom_strlen - finds the length of a string
 * @str: pointer to the string
 * Return: length of the string
 */
size_t custom_strlen(char *str)
{
	size_t b;

	for (b = 0; str[b]; b++)
		;
	return (b);
}

/**
 * append_text_to_file - appends a text at the end of a  file
 * @filename: name of the file
 * @new_content: NULL terminated string to add at the end
 * Return: 1 on success and -1 on fsilure
 */
int append_text_to_file(const char *filename, char *new_content)
{
	int g;
	ssize_t k;

	if (filename == NULL)
		return (-1);
	g = open(filename, O_WRONLY | O_APPEND);
	if (g == -1)
		return (-1);
	if (new_content != NULL)
		k = write(g, new_content, custom_strlen(new_content));
	close(g);
	if (k == -1)
		return (-1);
	return (1);
}

