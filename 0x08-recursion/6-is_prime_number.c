#include "main.h"
/**
 * prime_det - detect if input integer is a prime number
 * @n: input integer
 * @c: iterator
 * Return: 1 if integer is prime number, otherwise return 0
 */
int prime_det(unsigned int n, unsigned int a)
{
	if (n % a == 0)
	{
		if (n == a)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0 + prime_det(n, a + 1));
}
/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0
 * @n: input integer
 * Return: 1 if integer is prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n < 0)
	{
		return (0);
	}
	if (n == 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (0);
	}
	return (prime_det(n, 2));
}
