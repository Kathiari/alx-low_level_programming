#include "main.h"

/**
 * _strlen - a function that returns the length of string
 * @s: the string
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int j = 0;

	for (; *s++;)
		j++;
	return (j);
}
