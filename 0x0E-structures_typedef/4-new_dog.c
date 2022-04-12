#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog
 * @name: char
 * @age: float
 * @owner: char
 * Return: new dog pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	int i, j, l1;

	newdog = malloc(sizeof(*newdog));
	if (newdog == NULL || !(name) || !owner)
	{
		free(newdog);
		return (NULL);
	}
	for (i = 0; name[i]; i++)
		;
	for (j = 0; owner[j]; j++)
		;

	newdog->name = malloc(i + 1);
	newdog->owner = malloc(j + 1);

	if (!(newdog->name) || !(newdog->owner))
	{
		free(newdog->owner);
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	for (l1 = 0; l1 < i; l1++)
		newdog->name[l1] = name[l1];
	newdog->name[l1] = '\0';

	newdog->age = age;
	for (l1 = 0; l1 < j; l1++)
		newdog->owner[l1] = owner[l1];
	newdog->owner[l1] = '\0';

	return (newdog);
}
