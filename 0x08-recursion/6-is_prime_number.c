#include "main.h"
/**
 * is_prime_number - function that return the interger if is prime
 *
 * @n: number
 *
 * Return: 1 if is integer other wise 0
 */

int is_prime_number(int n)
{
	if (n > 1 || n / 2 != 0)
	{
		return (1);
	}
	else
		return (0);
}
