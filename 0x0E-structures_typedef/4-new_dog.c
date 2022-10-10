#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create a new dog.
 * @name: name of the dog
 * @age: age of the dog
 * @owner: Owner of the dog
 * Return: New struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *cpyname, *cpyowner;
	int len_name = 0;
	int len_owner = 0;
	int i;

	if (name == NULL || owner == NULL)
		return (NULL);
	while (name[len_name])
		len_name++;
	while (owner[len_owner])
		len_owner++;
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	cpyname = malloc(len_name + 1);
	if (cpyname == NULL)
	{
		free(new_dog);
		free(owner);
		return (NULL);
	}
	for (i = 0; name[i]; i++)
		cpyname[i] = name[i];
	cpyname[i] = '\0';
	cpyowner = malloc(len_owner + 1);
	if (cpyowner == NULL)
	{
		free(new_dog);
		free(name);
		return (NULL);
	}
	for (i = 0; owner[i]; i++)
		cpyowner[i] = owner[i];
	cpyowner[i] = '\0';
	new_dog->name = cpyname;
	new_dog->age = age;
	new_dog->owner = cpyowner;
	return (new_dog);
}
