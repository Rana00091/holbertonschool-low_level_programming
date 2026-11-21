#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
* new_dog - Creates a new dog
* @name: The dog's name
* @age: The dog's age
* @owner: The dog's owner
*
* Return: Pointer to the new dog, or NULL on failure
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	char *name_copy;
	char *owner_copy;
	unsigned int i;

	if (name == NULL || owner == NULL)
		return (NULL);

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	name_copy = malloc(strlen(name) + 1);
	if (name_copy == NULL)
	{
		free(new);
		return (NULL);
	}

	for (i = 0; name[i] != '\0'; i++)
		name_copy[i] = name[i];
	name_copy[i] = '\0';

	owner_copy = malloc(strlen(owner) + 1);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(new);
		return (NULL);
	}

	for (i = 0; owner[i] != '\0'; i++)
		owner_copy[i] = owner[i];
	owner_copy[i] = '\0';

	new->name = name_copy;
	new->age = age;
	new->owner = owner_copy;

	return (new);
}
