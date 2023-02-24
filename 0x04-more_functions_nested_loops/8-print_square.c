#include "main.h"
/**
 * print_square - prints a square, followed by a new line
 * @size: size of the square
 * @#: character to print the square
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 2; i <= size; i++)
		{
			for (j = 2; j <= i; j++)
			{
				_putchar(35);
			}
			_putchar(35);
			_putchar('\n');
		}
	}
}
