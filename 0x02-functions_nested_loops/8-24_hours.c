#include "main.h" 

void jack_bauer(void)
{
	int i = 0;
	int k = 0;
	int l = 0;

	while(i <= 24)
	{
		i = 0;
		while(k <= 6)
		{
			k  = 0;
			l = 0;
			if (l <= 9)
			{
				l++;
				_putchar(i % 10 + '0');
				_putchar(':');
				_putchar(k + '0');
				_putchar(l + '0');
				_putchar('\n');
			}
			else
			{
				l = 0;
			}
			k++;
		}
		i++;
	}
}




