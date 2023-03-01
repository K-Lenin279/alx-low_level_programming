#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first input string character
 * @s2: second input string character
 * Return: pointer to the resulting j
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	j = s1[i] - s2[i];
	return (j);
}
