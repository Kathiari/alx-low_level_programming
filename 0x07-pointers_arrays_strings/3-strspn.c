#include "main.h"

/**
 * _strspn - a function that locates a character in a string
 * @s: first argument
 * @accept: second argument
 * @i: first var
 * @j: second var
 * @k: third var
 * Return: an int.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i] != '\0')
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (accept[j] == s[i])
				{
					k++;
				}
			}
		}
		else
		{
			return (k);
		}
		i++;
	}
	return (k);
}

