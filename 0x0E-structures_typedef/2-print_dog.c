#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @k: struct dog to print
 * Return: nothing
 */
void print_dog(struct dog *k)
{
	if (k == NULL)
		return;

	if (k->name == NULL)
		k->name = "(nil)";
	if (k->owner == NULL)
		k->owner = "(nil)";
	printf("Name: %s\nAge: %fnOwner: %s\n", k->name, k->age, k->owner);
}
