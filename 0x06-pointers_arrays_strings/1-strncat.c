#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: first string
 * @src: second string
 *
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *s = dest;
	int i = 0;

	while (*dest != '\0')
	{
		dest++;
	}

	while (i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}

	*dest = '\0';

	return (s);
}
