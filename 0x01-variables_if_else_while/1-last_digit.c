#include<stdlib.h>                                                             
#include<time.h>
#include<stdio.h>                                                              
/* more headers goes there */

/* betty style doc main goes there */
/**
 *
 * main - the entry point
 *
 *
 *
 * Description: determine last digit of number
 *
 * Return: null values are received
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int m = n % 10;

	if (m > 5)
		printf("Last digit of %d is %d and is greater than 5 and not 0\n", n, m);
	else if (m < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	else
		printf("Last digit of %d is %d and is 0\n", n, m);
	return (0);
}
