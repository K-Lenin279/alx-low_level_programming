#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: to memory area
 * @src: from memory area
 * @n: bytes to be copied
 * Return: pointer to resulting dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, j;

	i = 0;
	j = 0;
	while (i < n)
	{
		while (j < i)
		{
			dest[i] = src[j];
			j++;
			i++;
		}
	}
	return (dest);
}
