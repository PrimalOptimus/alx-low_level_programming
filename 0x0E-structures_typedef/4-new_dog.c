#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - function that create a new dog
 * @name: value 1
 * @age: value 2
 * @owner: value 3
 *
 *
 * Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0, k;
	dog_t *polo;

	if (name == NULL || owner == NULL)
		return (NULL);
	polo = malloc(sizeof(dog_t));

	if (polo == NULL)
		return (NULL);
	while (name[i])
	{
		i++;
	}
	while (owner[j])
	{
		j++;
	}
	polo->name = malloc(sizeof(char) * (i + 1));
	if (polo->name == NULL)
	{
		free(polo);
		return (NULL);
	}
	polo->age = age;
	polo->owner = malloc(sizeof(char) * (j + 1));
	if (polo->owner == NULL)
	{
		free(polo->name);
		free(polo);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
	{
		polo->name[k] = name[k];
	}
	for (k = 0; k <= j; k++)
	{
		polo->owner[k] = owner[k];
	}
	return (polo);
}
