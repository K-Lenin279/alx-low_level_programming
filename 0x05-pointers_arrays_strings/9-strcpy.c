#include "main.h"
/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: input string character
 * @src: input string character
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	a = 0;
	while (a >= 0)
	{
		dest[a] = src[a];
		if (src[a] == '\0')
		{
			break;
		}
		a++;
	}
	return (dest);
}

