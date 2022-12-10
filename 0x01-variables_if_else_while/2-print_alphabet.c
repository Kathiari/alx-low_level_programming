#include<stdio.h>

/*The program prints alphabet in lowercase*/
/**
 * main - The entry point of program
 *
 * Description - program prints alphabets in lowercase
 * Return: Always 0 success
 */

int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	putchar('\n');
	return (0);
}
