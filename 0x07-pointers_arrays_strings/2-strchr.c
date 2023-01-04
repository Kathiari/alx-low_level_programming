#include "main.h"

char *_strchr(char *s, char c)
{
	int i;
	int j;
	char b[100];

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			while (s[i] != '\0')
			{
				b[j] = s[i];
				j++;
			}
			s = b;
		}
		else
		{
			continue;
		}
		i++;
	}

	return (s);
}
