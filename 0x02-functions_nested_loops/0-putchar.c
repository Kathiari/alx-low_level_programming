#include<stdio.h>
#include<unistd.h>
/* This program prints _putchar */
/**
 * main - entry point of program
 *
 * Return: returns a null value
 */
int _putchar(char c);
int _putchar(char c)
{
	return (write(1, &c, 1));
}
int main(void)
{
	char str[] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	return 0;
}

