#include <stdio.h>
#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 * followed by a new line
 * @a: input string integer
 * @n: number of elements of the array to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);
		if (b != n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
