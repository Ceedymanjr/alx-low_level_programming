#include "main.h"

/**
 * _sqrt_recursion - function that return the square root of numbers
 * @n: number
 * Return: n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_recursion(n, 0, n));
}


/**
 * _sqrt_recursive - function that Recursively searches for the square root
 * @low: parameter
 * @high: parameter
 * @n: number
 * Return: n
 */

int _sqrt_recursive(int n, int low, int high)
{
	int mid;
	int square;

	if (low > high)
	{
		return (-1);
	}

	mid = (low + high) / 2;
	square = mid * mid;

	if (square == n)
	{
		return (mid);
	}
	else if (square > n)
	{
		return (_sqrt_recursive(n, low, mid - 1));
	}
	else
	{
		return (_sqrt_recursive(n, mid + 1, high));
	}
}
