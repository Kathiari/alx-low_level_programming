#include<stdio.h>
/* This program prints alphabet in reverse order */
/**
 * main - entry point of program
 *
 * Return: Produces void value
 */
int main(void)
{
	char z = 'z';

	while (z >= 'a')
	{
		putchar(z);
		z--;
	}
	putchar('\n');
	return (0);
}
