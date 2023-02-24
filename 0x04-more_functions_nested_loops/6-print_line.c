#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: the number of times the character _ should be printed
 * Return: void
 */
void print_line(int n)
{
	int r, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (r = 0; r <= n; r++)
		{
			for (j = 0; j < r; j++)
			{
				_putchar(95);
			}
			_putchar(95);
			_putchar('\n');
		}
	}
}
