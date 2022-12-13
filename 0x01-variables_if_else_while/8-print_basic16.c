#include<stdio.h>
/* This program prints numbers of base 16 in lowercase */
/**
 * main - entry point of the program
 *
 * Return: no value is returned
 */
int main(void)
{
	int a;
	char b = 'a';

	while (a < 10)
	{
		putchar(a + '0');
		a++;
	}
	while (b <= 'f')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
