#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for dog
 * @name: a pointer to name
 * @age: stores age
 * @owner: owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif