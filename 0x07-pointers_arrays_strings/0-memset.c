#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @n: bytes filled
 * @s: memory area
 * @b: constant bytes
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
        unsigned int i;

	i = 0;
	do
	{
		s[i] = b;
		i++;
	}while (i < n);
        return (s);
}
