#include "main.h"

/**
 * _pow_recursion - fuction that return the value
 * of x and raised the power of y
 *
 * @x: number
 *
 * @y: power
 *
 * Return: x and y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, (y - 1)));
}
