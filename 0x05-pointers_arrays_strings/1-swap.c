#include "main.h"

/**
 * swap_int - a  function that swaps the value of two integers
 * @a: first value
 * @b: second value
 *
 * Return: always 0.
 */
void swap_int(int *a, int *b)
{
	*a = *a - *b;
	*b = *b + *a;
	*a = *b - *a;
}
