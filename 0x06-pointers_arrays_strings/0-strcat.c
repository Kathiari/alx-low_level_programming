#include "main.h"

/**
 *_strcat - a function that concatenates two strings
 *@dest: the first string
 *@src: the second string
 *
 *Return: an array.
 */

char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return dest;
}
