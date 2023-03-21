#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creating a new dog.
 * @name: name of the struct.
 * @age: age of the struct.
 * @owner: owner of the struct.
 * Return: new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	int a, pname, powner;

	p = malloc(sizeof(*p));
	if ((p == NULL) || (!name) || (!owner))
	{
		free(p);
		return (NULL);
	}

	for (pname = 0; name[pname]; pname++)
	{
		(*p).name = malloc(pname + 1);
	}
	for (powner = 0; owner[powner]; powner++)
	{
		(*p).owner = malloc(powner + 1);
	}

	if (!((*p).name) || !((*p).owner))
	{
		free((*p).owner);
		free((*p).name);
		free(p);
		return (NULL);
	}

	for (a = 0; a < pname; a++)
		(*p).name[a] = name[a];
	(*p).name[a] = '\0';

	(*p).age = age;
	
	for (a = 0; a < powner; a++)
		(*p).owner[a] = owner[a];
	(*p).owner[a] = '\0';
	return (p);
}
