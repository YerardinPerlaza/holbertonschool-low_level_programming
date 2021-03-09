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
	dog_t *new_name;
	char *copy_name, *copy_owner;

	new_name = malloc(sizeof(dog_t));
	if (new_name == NULL)
		return (NULL);
	if (name == NULL || owner == NULL)
	{
		free(new_name);
		return (NULL);
	}

	copy_name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (copy_name == NULL)
		return (NULL);

	copy_owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (copy_owner == NULL)
		return (NULL);

	copy_name = _strcpy(copy_name, name);
	copy_owner = _strcpy(copy_owner, owner);

	new_name->name = copy_name;
	new_name->owner = copy_owner;
	new_name->age = age;
	return (new_name);

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
