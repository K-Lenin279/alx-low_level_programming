#include <stdio.h>
#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 *
 * @c: the character to be checked
 *
 * Return: 1 if c is a letter, 0 otherwise
 *
 * Return: (0) (Success)
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
