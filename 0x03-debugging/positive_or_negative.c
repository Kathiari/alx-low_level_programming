#include<stdio.h>
/* more headers goes there */

/* betty style doc main goes there */
/**
 * main - the entry point
 *
 * Description: determine if number is positive or negative
 * Return: null values are received
 */

void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
}
