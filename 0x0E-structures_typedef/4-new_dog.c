#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - length of string
 * @s: string to be evaluated
 * Return: length of string
 */

int _strlen(char *s)
{
	int x;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	return (x);
}

/**
 * *_strcpy - copies the string pointed
 * @dest: pointer to the buffer where we copy string
 * @src: string to be copied
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int a, b;

	a = 0;

	while (src[a] != '\0')
	{
		a++;
	}

	for (b = 0; b < a; b++)
	{
		dest[b] = src[b];
	}
	dest[b] = '\0';

	return (dest);
}

/**
 * new_dog - new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to the new dog or  NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int num1, num2;

	num1 = _strlen(name);
	num2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (num1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (num2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
