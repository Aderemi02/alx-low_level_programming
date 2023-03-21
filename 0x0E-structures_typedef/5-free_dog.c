#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees d struct
 * @d: struct to be freed
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free((*d).name);
		free((*d).age);
		free((*d).owner);
	}
}
