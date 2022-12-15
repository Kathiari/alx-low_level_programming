#include "main.h"

/**
 * _isalpha(int c) - checks fro alphabetic character
 * @c: the character to be checked
 *
 * Return: The null value is returned
 */
int _isalpha(int c)
{
	if (c <= 122 && c >=97)
	{
		return (1);
	}
	else if (c <= 90 && c >= 65)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
