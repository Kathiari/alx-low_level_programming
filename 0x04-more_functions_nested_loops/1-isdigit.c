#include "main.h"

/**
 * _isdigit - this function checks for a digit
 * @c: the digit to be checked
 *Return: 0 OR 1
 */
int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
