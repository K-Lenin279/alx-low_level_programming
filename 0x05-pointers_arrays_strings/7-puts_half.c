#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: input string character
 * Return: void
 */
void puts_half(char *str)
{
	int a, b;

	a = 0;
	while (a >= 0)
	{
		if (str[a] == '\0')
		{
			break;
		}
		a++;
	}
	if (a % 2 == 1)
	{
		b = a / 2;
	}
	else
	{
		b = (a - 1) / 2;
	}
	for (b++; b < a; b++)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
