#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: the pointer to the destination array,
 * where the content is to be copied
 * @src: the string to be copied
 * @n: amount of bytes contained in src
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	for (; i < 1000; i++)
	{
		if (dest[i] == '\0')
		{
			break;
		}
		j++;
	}
	for (; i < n && src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';
	return (dest);
}
