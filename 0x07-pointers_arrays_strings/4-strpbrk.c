#include "main.h"

/**
 * _strpbrk - a function that searches a string
 *
 * @s: first argument
 *
 * @accept: second argument
 *
 * @j: first var
 *
 * Return: a pointer.
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}				
