#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * _islower - checks for lowercase character
 *
 * @c: the character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 *
 * Return: (0) (Success)
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
