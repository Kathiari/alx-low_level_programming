#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j == i)
			{
				_putchar('\\');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	_putchar('\n');
}
