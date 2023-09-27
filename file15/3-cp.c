#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * check_argument_count - checks for the correct number of arguments
 * @argc: number of arguments
 *
 * Return: void
 */
void check_argument_count(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * check_read_error - checks that file_from exists and can be read
 * @check: checks if true or false
 * @file_name: file_from name
 * @fd_from: file descriptor of file_from, or -1
 * @fd_to: file descriptor of file_to, or -1
 *
 * Return: void
 */
void check_read_error(ssize_t check, char *file_name, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_name);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(98);
	}
}

/**
 * check_write_error - checks that file_to was created and/or can be written to
 * @check: checks if true or false
 * @file_name: file_to name
 * @fd_from: file descriptor of file_from, or -1
 * @fd_to: file descriptor of file_to, or -1
 *
 * Return: void
 */
void check_write_error(ssize_t check, char *file_name, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_name);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(99);
	}
}

/**
 * check_close_error - checks that file descriptors were closed properly
 * @check: checks if true or false
 * @fd: file descriptor
 *
 * Return: void
 */
void check_close_error(int check, int fd)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file.
 * @argc: number of arguments passed
 * @argv: array of pointers to the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, close_to, close_from;
	ssize_t read_len, write_len;
	char buffer[1024];
	mode_t file_perm;

	check_argument_count(argc);
	fd_from = open(argv[1], O_RDONLY);
	check_read_error((ssize_t)fd_from, argv[1], -1, -1);
	file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);
	check_write_error((ssize_t)fd_to, argv[2], fd_from, -1);
	read_len = 1024;
	while (read_len == 1024)
	{
		read_len = read(fd_from, buffer, 1024);
		check_read_error(read_len, argv[1], fd_from, fd_to);
		write_len = write(fd_to, buffer, read_len);
		if (write_len != read_len)
			write_len = -1;
		check_write_error(write_len, argv[2], fd_from, fd_to);
	}
	close_to = close(fd_to);
	close_from = close(fd_from);
	check_close_error(close_to, fd_to);
	check_close_error(close_from, fd_from);
	return (0);
}

