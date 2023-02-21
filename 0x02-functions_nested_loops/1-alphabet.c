#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * print_alphabet() - prints the alphabet lowercase
 *
 * Return: (0) (Success)
 */
void print_alphabet(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(alp[i]);
	}
	_putchar('\n');
}
