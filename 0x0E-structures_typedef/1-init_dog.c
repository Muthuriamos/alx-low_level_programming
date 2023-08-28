#include "dog.h"
/**
 * init_dog - initializes dog struct
 * @f: pointer to struct dog
 * @name: input for dog name
 * @owner: input for dog owner
 * @age: input for dog age
 * Return: nothing
 */
void init_dog(struct dog *f, char *name, float age, char *owner)
{
	if (f)
	{
		(*f).owner = owner;
		(*f).age = age;
		(*f).name = name;
	}
}
