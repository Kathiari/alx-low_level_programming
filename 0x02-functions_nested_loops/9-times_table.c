#include "main.h"

/**
 * times_table - this function prints 9 times table
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int i = 0;
	int j = 0;
	int k;

	while (i <= 9)
	{
		while (j <= 9)
		{
			k = i * j;
			_putchar((k%10) + '0');
			_putchar(',');
			_putchar(' ');
			j++;
		}
		_putchar('\n');
		j = 0;
		i++;
	}
}
