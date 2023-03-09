#include "main.h"
/**
 * _sqrt_recursion - function returns the natural square root of a number
 * @n: number to calculate the square root of
 * @i: parameter to be hold
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int n, int i);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
