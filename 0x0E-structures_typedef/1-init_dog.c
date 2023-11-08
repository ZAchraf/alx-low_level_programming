#include "dog.h"

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @t: the dog to initialize
 * @name: white dog's name
 * @owner: his owner
 * @age: his age
 * Return: nothing
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
