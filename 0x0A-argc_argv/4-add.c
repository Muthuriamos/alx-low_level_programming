#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - adds positive numbers
 * @argc: number of command line arguments
 * @argv: array that contains the program line argument
 * Return: 0 - success
 */
int main(int argc, char *argv[])
{
	int m, n, p = 0;

	for (m = 1; m < argc; m++)
	{
		for (n = 0; argv[m][n] != '\0'; n++)
		{
			if (!isdigit(argv[m][n]))
			{
				printf("Error\n");
				return (1);
			}
		}
		p += atoi(argv[m]);
	}
	printf("%d\n", p);
	return (0);
}
