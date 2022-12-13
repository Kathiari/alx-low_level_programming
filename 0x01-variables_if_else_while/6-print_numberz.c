#include<stdio.h>
/* This program uses putchar to print int */
/**
 * main - entry point of program
 *
 * Return: No return value
 */
int main(void)
{
	char a = '0';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
