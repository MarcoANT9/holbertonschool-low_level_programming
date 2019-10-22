#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Determines the length of a string
 *
 * @s: Pointer to the string
 *
 * Return: Lenght of the string.
 */

int _strlen(char *s)
{
	int i = 0;
	while (*(s + i) != '\0')
		i++;
	return (i);
}

/**
 * _strcpy - Copies the string pointed to by src to the buffer pointed
 *           to by dest
 *
 * @dest: Destination buffer
 * @src: Source buffer
 *
 * Return: The pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int a = *(src + i);
	int j = 0;

	while (a != '\0')
	{
		i = i + 1;
		a = *(src + i);
	}
	while (j < i)
	{
		a = *(src + j);
		dest[j] = a;
		j = j + 1;
	}
	dest[j] = '\0';
	return (dest);
}

/**
 * new_dog - Creates a new dog from thin air
 *
 * @name: Name of the new dog.
 * @age: Age of the new dogge.
 * @owner: Owner of the new dogge.
 *
 * Description - Takes information from another dog and copies it to
 *               another one (who needs cloning right?).
 *
 * Return: New structure.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *name2;
	char *owner2;
	dog_t *dogge;
	int i = 0;

	if (name == NULL || owner == NULL)
		return (NULL);


	dogge = malloc(sizeof(dog_t));

	if (dogge == NULL)
		return (NULL);


	name2 = malloc(sizeof(char) * _strlen(name));
	if (name2 == NULL)
			    return (NULL);


	owner2 = malloc(sizeof(char) * _strlen(owner));
	if (owner2 == NULL)
		return (NULL);

	while (i <= _strlen(name))
	{
		*(name2 + i) = *(name + i);
		i++;
	}

	i = 0;

	while (i <= _strlen(owner))
	{
		*(owner2 + i) = *(owner + i);
		i++;
	}


	dogge->name = name2;
	dogge->age = age;
	dogge->owner = owner2;

	return (dogge);

}
