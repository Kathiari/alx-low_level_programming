#include<stdio.h>
/* This program uses putchar to print int */
/**
 * main - entry point of program
 *
 * Return: No return value
 */
int main(void)
{
	int a = 0;

	while (a <= 9)
	{
		putchar(a + '0');
		a++;
	}
	putchar('\n');
	return (0);
}
