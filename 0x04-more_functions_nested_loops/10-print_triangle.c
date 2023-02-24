#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 * @#: character to print the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int n, r;

	for (n = 0; n < size; n++)
	{
		for (r = 1; r < (size - n); r++)
		{
			_putchar(' ');
		}
		for (r--; r < size; r++)
		{
			_putchar(35);
		}
		if (n < (size - 1))
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
