#include "main.h"

/**
 * print_alphabet - prints lowercase alphabets
 *
 * Return: returns null value.
 */

void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}

	_putchar('\n');
}
