#include <stdio.h>
#include "main.h"

/**
 * main - Prints the number of arguements passed into it
 * @argc: number of command line arguments
 * @argv: array that contains the program command
 * Return: 0 - success
 */
int main(int argc, __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
