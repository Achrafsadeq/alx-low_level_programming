#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * _strlen - Calculates the length of a string.
 * @s: The string to measure.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
		index++;
	}
	return (index);
}

/**
 * _strcpy - Copies a string to a destination buffer.
 * @dest: The destination buffer.
 * @src: The source string.
 *
 * Return: The pointer to the destination buffer.
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

/**
 * new_dog - Creates a new dog structure.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: A pointer to the newly created dog structure, or NULL on failure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;
	int name_len, owner_len;

	new_dog_ptr = malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
	{
		return (NULL);
	}

	name_len = _strlen(name);
	owner_len = _strlen(owner);

	/* Allocate memory for name */
	new_dog_ptr->name = malloc(sizeof(char) * (name_len + 1));
	if (new_dog_ptr->name == NULL)
	{
		free(new_dog_ptr);
		return (NULL);
	}

	/* Allocate memory for owner */
	new_dog_ptr->owner = malloc(sizeof(char) * (owner_len + 1));
	if (new_dog_ptr->owner == NULL)
	{
		free(new_dog_ptr->name);
		free(new_dog_ptr);
		return (NULL);
	}

	/* Copy name and owner, set age */
	_strcpy(new_dog_ptr->name, name);
	_strcpy(new_dog_ptr->owner, owner);
	new_dog_ptr->age = age;

	return (new_dog_ptr);
}
