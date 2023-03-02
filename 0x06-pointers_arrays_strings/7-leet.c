#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: pointer to character
 * Return: pointer to s
 */
char *leet(char *s)
{
	char *c = s;
	char letters[] = {'A', 'E', 'O', 'T', 'L'};
	int num_val[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*s)
	{
		for (i = 0; i < sizeof(letters) / sizeof(char); i++)
		{
			if (*s == letters[i] || *s == letters[i] +32)
			{
				*s = 48 + num_val[i];
			}
		}
		s++;
	}
	return (c);
}
