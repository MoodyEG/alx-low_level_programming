#include "dog.h"
/**
 * *_strcpy - copies the string pointed to by src
 * @src: pointer to our char
 * @dest: pointer to our char
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int b;

	for (b = 0; src[b] != '\0'; b++)
	{
		dest[b] = src[b];
	}
	dest[b] = '\0';

	return (dest);
}
/**
 * new_dog - creates a new dog.
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: a struct to the new dog or NULL if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;
	int dogname, dogowner;

	doggy = malloc(sizeof(*doggy));
	if (doggy == NULL || !(name) || !(owner))
	{
		free(doggy);
		return (NULL);
	}
	for (dogname = 0; name[dogname] != '\0'; dogname++)
	;
	doggy->name = malloc(dogname + 1);
	for (dogowner = 0; owner[dogowner] != '\0'; dogowner++)
	;
	doggy->owner = malloc(dogowner + 1);
	if (!(doggy->name) || !(doggy->owner))
	{
		free(doggy->owner);
		free(doggy->name);
		free(doggy);
		return (NULL);
	}
	_strcpy(doggy->name, name);
	_strcpy(doggy->owner, owner);
	doggy->age = age;

	return (doggy);
}
