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
	dog_t *n-dog;

	while (name[x] != '\0')
		x++;
	while (owner[z] != '\0')
		z++;
	n-dog = malloc(sizeof(dog_t));
	if (n-dog == NULL)
	{
		free(n-dog);
		return (NULL);
	}
	n-dog->name = malloc(x * sizeof(n-dog->name));
	if (n-dog->name == NULL)
	{
		free(n-dog->name);
		free(n-dog);
		return (NULL);
	}
	for (k = 0; k <= x; k++)
		n-dog->name[k] = name[k];
	n-dog->age = age;
	n-dog->owner = malloc(z * sizeof(n-dog->owner));
	if (n-dog->owner == NULL)
	{
		free(n-dog->owner);
		free(n-dog->name);
		free(n-dog);
		return (NULL);
	}
	for (k = 0; k <= z; k++)
		n-dog->owner[k] = owner[k];
	return (n-dog);
}
