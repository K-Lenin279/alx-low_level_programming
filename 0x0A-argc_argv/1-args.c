#include <stdio.h>

/**
 * main - check the code
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int x;

	x = 0;
	while (x < argc)
	{
		printf("%d %s\n", x, argv[x]);
		x++;
	}
	return (0);
}
