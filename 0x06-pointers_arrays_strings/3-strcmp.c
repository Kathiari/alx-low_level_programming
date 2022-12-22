#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: string
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;

	for (i = 0; s1[i] != '0' || s2[i] != '0'; i++)
	{
		if (s1[i] == s2[i])
		{
			return (0);
		}
		else if (s1[i] < s2[i])
		{
			j = *(s1 + i) - *(s2 + i);
			break;
		}
		else
		{
			j = *(s1 + i) - *(s2 + i);
			break;
		}
	}
	return (j);
}


