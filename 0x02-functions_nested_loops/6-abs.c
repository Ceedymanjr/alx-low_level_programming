#include "main.h"

/**
 * _abs - checks for absolute value
 *
 * @c: parameter for absolute value
 *
 * Return: always a
 */

int _abs(int c)
{
	if (c < 0)
		c = -(c);
	else if (c >= 0)
		c = c;
	return (c);
}
