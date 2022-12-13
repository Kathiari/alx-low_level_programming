#include<stdio.h>
/* This prints numbers */
/**
 * main - entry point of program
 *
 * Return: This program returns null value
 */
int main(void)
{
	int a;

	while (a < 10)
	{
		printf("%d", a);
		a++;
	}
	putchar('\n');
	return (0);
}
