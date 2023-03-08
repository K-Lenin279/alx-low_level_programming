#include "main.h"
/**
 * pow_mul - returns natural square root of integer
 * @n: base integer to be raised
 * @a: power integer value
 * Return: -1 or square root
 */
int pow_mul(int n, int a)
{
	if (a % (n / a) == 0)
	{
		if (a * (n / a) == n)
		{
			return (a);
		}
		else
		{
			return (-1);
		}
	}
	return (0 + pow_mul(n, a + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to be evaluated
 * Return: -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}
		return (pow_mul(n, 2));
}
