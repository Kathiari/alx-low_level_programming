#include "main.h"

/**
 * print_line - a function that draws a straight line in the 
 * terminal
 * @n: the first integer
 * Return: Always 0.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i > 0)
			_putchar('_');
	}
	_putchar('\n');
}
