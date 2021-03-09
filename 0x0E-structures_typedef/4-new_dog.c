#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - check the code for Holberton School students.
 *@name: char
 *@age: float
 *@owner: char
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->name = NULL;
	new->age = age;
	new->owner = NULL;

	new->name = malloc(sizeof(new->name) * (_strlen(name) + 1));
	new->owner = malloc(sizeof(new->owner) * (_strlen(name) + 1));

	if (new->name == NULL || new->owner == NULL)
	{
		free(new->name);
		free(new->owner);
		free(new);
		return (NULL);
	}

	new->name = _strcpy(new->name, name);
	new->owner = _strcpy(new->owner, owner);

	return (new);

}

/**
 * _strlen - returns the length of a string
 * @s: get a pointer
 * Return: return the string
 */
int _strlen(char *s)
{
	unsigned int c;

	for (c = 0; s[c]; c++)
		;

	return (c);
}
/**
 * _strcpy - copy the string in src to dest
 *
 * @dest: destiny char
 * @src: source char
 * Return: copy char in destiny
 */
char *_strcpy(char *dest, char *src)
{
	int index;

	for (index = 0; src[index] != '\0'; index++)
		dest[index] = src[index];
	dest[index] = '\0';
	return (dest);
}
