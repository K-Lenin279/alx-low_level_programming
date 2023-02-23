#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: the number of times the character _ should be printed
 * Return: void
 */
void print_line(int n)
{
	int r;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		r = 1;
		while (r <= n)
		{
			_putchar('_');
			r++;
		}
	}
}
