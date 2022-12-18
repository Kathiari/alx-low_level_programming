#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 *@i: the integer
 * Return: Always 0.
 */

int print_last_digit(int i)
{
	int j;

	j = i % 10;
	if (j < 0)
		j *= -1;

	_putchar(j + '0');
	return (j);
}
