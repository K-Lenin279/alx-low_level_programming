#include "main.h"
/**
 * set_string - setd the value of a pointer to a char
 * @s: pointer to pointer
 * @to: string to set
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
