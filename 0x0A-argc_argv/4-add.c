#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int x;

	(void) argc;
	x = 0;
	if (argv[x] >= 48 && argv[x] <= 57)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) + atoi(argv[2]));
	return (0);
}
