#include<stdio.h>
/* This program prints all possible combinations of single digit numbers. */
/**
 * main - the entry point of program
 *
 * Return: the return value is null
 */
int main(void)
{
	int a;

	while (a < 10)
	{
		putchar(a + '0');
		if (a == 9)
			break;
		putchar(',');
		putchar(' ');
		a++;
	}
	putchar('\n');
	return (0);
}
