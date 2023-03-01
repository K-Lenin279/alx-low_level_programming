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
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n)
	{
		dest[i] = src[j];
		if (src[j] != '\0')
		{
			break;
		}
		i++;
		j++;
	}
	return (dest);
}
