#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: what to intialize
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: no return
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
