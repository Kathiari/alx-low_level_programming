#include<stdio.h>

/* A progrm to print only certain files*/
/**
 * main - only print certain alphabets
 *
 * Description - a program of exception
 * Return - always 0 success
 */

int main(void)
{
	char a='a';
	char z='z';

	while(a<=z)
	{
		if(a != 'e' && a != 'q')
			putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
