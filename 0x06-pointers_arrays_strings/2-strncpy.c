#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: the place to copy
 * @src: the source file
 * @n: the max bytes
 *
 * Return: Always array.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	dest[i]  = '\0';
	return (dest);
}

	
