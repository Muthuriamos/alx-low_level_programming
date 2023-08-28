#include "main.h"

/**
 * _isalpha - checks for alphabet character
 * @c: character to be checked
 * Return: (1) is c is a letter, otherwise (0).
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
