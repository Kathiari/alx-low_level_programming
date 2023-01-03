#include "main.h"
/**
 * _memset - a function that fills memory with a contstant byte
 * @s: the first var
 * @b: the second var
 * @n: the third var
 * Return: Always 0.
 */

char * _memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
