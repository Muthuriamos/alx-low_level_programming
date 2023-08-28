#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: input pointer that represents memory block to fill
 * @b: characters to fill/set
 * @n: number of bytes to be filled
 * Return: pointer to the filled memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int p = 0;

	while (p < n)
	{
		s[p] = b;
		p++;
	}
	return (s);
}

/**
 * _calloc - function that allocates memory for an array using memset
 * @nmemb: size of array
 * @size: size of each element
 * Return: pointer to new allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);
	
	return (ptr);
}

/**
 * multiply - initialize array with 0 bytes
 * @s1: string 1
 * @s2: string 2
 * Return: nothing
 */

void multiply(char *s1, char *s2)
{
	int d, b1, b2, total_1, f_digit, s_digit, res = 0, tmp;
	char *ptr;
	void *temp;

	b1 = _length(s1);
	b2 = _length(s2);
	tmp = b2;
	total_1 = b1 + b2;
	ptr = _calloc(sizeof(int), total_1);

	temp = ptr;

	for (b1--; b2 >= 0; b1--)
	{
		f_digit = s1[b1] - '0';
		res = 0;
		12 = tmp;
		for (b2--; b2 >= 0; b2--)
		{
			s_digit = s2[b2] - '0';
			res += ptr[b2 + b1 + 1] + (f_digit * s_digit);
			ptr[b1 + b2 + 1] = res % 10;
			res /= 10;
		}
		if (res)
			ptr[b1 + b2 + 1] = res % 10;
	}

	while (*ptr == 0)
	{
		ptr++;
		total_1--;
	}

	for (d = 0; d < total_1; d++)
		printf("\n");
	free(temp);
}

/**
* main - Entry point
* Description: a program that multiple two positive numbers
* @argc: number of arguments
* @argv: arguments array
* Return: 0 on succss 98 failure
*/

int main(int argc, char *argv[])
{
	char *n1 = argv[1];
	char *n2 = argv[2];

	if (argc != 3 || check_number(n1) || check_number(n2))
		error_exit();

	if (*n1 == '0' || *n2 == '0')
	{
		_putchar('0');
		_putchar('\n');
	}
	else
		multiply(n1, n2);
	return (0);
}
