#include "main.h"

/**
 * puts2 - a function that prints every other character
 * @str: the string
 *
 * Return: Always 0.
 */
void puts2(char *str)
{
	int string;

	for (string = 0; str[string] != '\0'; string++)
	if (string % 2 == 0)
		_putchar(str[string]);
	_putchar('\n');
}
