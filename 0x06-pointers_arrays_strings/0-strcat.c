#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: the pointer to the destination array,
 * where content is to be copied
 * @src: the string to be copied
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
