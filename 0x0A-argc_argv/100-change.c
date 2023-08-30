#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of penny to make change for an amount
 * of money
 * @argc: number of command line arguments
 * @argv: array that contains the program command line arguments
 * Return; 0 - success
 */
int main(int argc, char *argv[])
{
	int gold, penny = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	gold = atoi(argv[1]);

	while (gold > 0)
	{
		if (gold >= 25)
			gold -= 25;
		else if (gold >= 10)
			gold -= 10;
		else if (gold >= 5)
			gold -= 5;
		else if (gold >= 2)
			gold -= 2;
		else if (gold >= 1)
			gold -= 1;
		penny += 1;
	}
	printf("%d\n", penny);
	return (0);
}
