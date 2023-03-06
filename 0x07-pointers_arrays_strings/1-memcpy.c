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
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
