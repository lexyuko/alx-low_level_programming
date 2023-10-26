#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - new dog
 * @name: name's dog
 * @age: age's dog
 * @owner: owner's dog
 * Return: newdog
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	int x = 0, z = 0, k;
	dog_t *ndog;

	while (name[x] != '\0')
		x++;
	while (owner[z] != '\0')
		z++;
	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
	{
		free(ndog);
		return (NULL);
	}
	ndog->name = malloc(x * sizeof(ndog->name));
	if (ndog->name == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
	for (k = 0; k <= x; k++)
		ndog->name[k] = name[k];
	ndog->age = age;
	ndog->owner = malloc(z * sizeof(ndog->owner));
	if (ndog->owner == NULL)
	{
		free(ndog->owner);
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
	for (k = 0; k <= z; k++)
		ndog->owner[k] = owner[k];
	return (ndog);
}
