#include "main.h"
/**
 * is_prime_number - function that return the interger if is prime
 *
 * @x: parameter
 *
 * @n: number
 *
 * Return: 1 if is integer other wise 0
 */

int is_prime_number(int n)
{
	int x = 0;

	if (n <= 1)
	{
		return (0);
	}
	if (x == 1)
	{
		return (1);
	}
	if (n % x == 0)
	{
		return (0);
	}
	return is_prime_number(n - 1);
}
