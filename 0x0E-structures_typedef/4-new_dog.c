#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - calculate string's length
 * @s: str
 * Return: the length
*/

int _strlen(const char *s)
{
	int l = 0;

	while (*s++)
		l++;
	return (l);
}

/**
 * _strcopy - it returns @d with a cp of a str from $src
 * @src: str to copy
 * @d: copy it here
 * Return: @d
*/

char *_strcopy(char *d, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		d[i] = src[i];
	d[i] = '\0';
	return (d);
}

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 * Return: Null if it fails, struct pointer dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);
	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);
	return (dog);
}
