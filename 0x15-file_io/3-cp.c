#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

#define READ_ERR "Error: Can't read from file %s\n"
#define WRITE_ERR "Error: Can't write to %s\n"

/**
 * main - check the code Holberton School students
 * @argc: num of args
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int source_fd, target_fd, file_from, x, y;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	target_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (target_fd == -1)
	{
		dprintf(STDERR_FILENO, WRITE_ERR, argv[2]);
		exit(99);
	}
	source_fd = open(argv[1], O_RDONLY);
	if (source_fd == -1)
	{
		dprintf(STDERR_FILENO, READ_ERR, argv[1]);
		exit(98);
	}
	while (1)
	{
		bytes_read = read(source_fd, buffer, 1024);
		if (x == -1)
		{
			dprintf(STDERR_FILENO, READ_ERR, argv[1]);
			exit(98);
		}
		if (x > 0)
		{
			bytes_written = write(target_fd, buffer, bytes_read);
			if (y == -1)
			{
				dprintf(STDERR_FILENO, WRITE_ERR, argv[2]);
				exit(99);
			}
		}
		else
		{
			break;
		}
		if (close(source_fd) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close source_fd %d\n", source_fd);
			exit(100);
		}
		if (close(target_fd) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close target_fd %d\n", target_fd);
			exit(100);
		}
		return (0);
	}

