#include<stdio.h>

/* print the lowercase and uppercase alphabets*/
/**
 * main - entry point of program
 *
 * Description: print bothcase alphabets
 * Return: Always 0 success
 */

int main(void)
{
	char ch = 'a';
	char sh = 'A';

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (sh = 'A'; sh <= 'Z'; sh++)
		putchar(sh);

	putchar('\n');
	return (0);
}

