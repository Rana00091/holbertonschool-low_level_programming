#include <stdlib.h>
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
	unsigned int i, name_len, owner_len;

	if (name == NULL || owner == NULL)
		return (NULL);

	name_len = 0;
	while (name[name_len] != '\0')
		name_len++;

	owner_len = 0;
	while (owner[owner_len] != '\0')
		owner_len++;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	name_copy = malloc(name_len + 1);
	if (name_copy == NULL)
	{
		free(new);
		return (NULL);
	}

	for (i = 0; i < name_len; i++)
		name_copy[i] = name[i];
	name_copy[i] = '\0';

	owner_copy = malloc(owner_len + 1);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(new);
		return (NULL);
	}

	for (i = 0; i < owner_len; i++)
		owner_copy[i] = owner[i];
	owner_copy[i] = '\0';

	new->name = name_copy;
	new->age = age;
	new->owner = owner_copy;

	return (new);
}
