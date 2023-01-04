#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 *
 * @s: the first argument
 *
 * @c: second argument
 *
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
		return (s);

	return (s);
}
