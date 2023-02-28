#include "main.h"
/**
 * _puts - prints a string, followed by a new line
 * to stdout
 * @str: input pointer character
 * Return: void
 */
void _puts(char *str)
{
	int a;

	a = 0;
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		a++;
	}
	_putchar('\n');
}
