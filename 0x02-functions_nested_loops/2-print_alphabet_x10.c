#include "main.h"

/**
 * print_alphabet_x10 - prints lower alphabets 10 times
 *
 * Return: returns null values
 */
void print_alphabet_x10(void)
{
	char a;
	int i = 1;

	while (i <= 10)
	{
		a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		i++;
	}
}
