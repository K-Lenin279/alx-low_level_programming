#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: the pointer to the destination array,
 * where the content is to be copied
 * @src: the string to be copied
 * @n: amount of bytes in src
 * Return: pointer to the resulting dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	for (; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
