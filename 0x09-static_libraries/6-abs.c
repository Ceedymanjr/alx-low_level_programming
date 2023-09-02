#include "main.h"

/**
 * _abs - function that print absolute value
 *
 * @x: parameter of the function
 *
 * Return: return int
 */


int _abs(int x)
{
	if (x < 0)
		x = -(x);
	else if (x >= 0)
		x = x;
	return (x);
}
