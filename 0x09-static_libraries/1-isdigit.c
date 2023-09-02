#include "main.h"

/**
 * _isdigit - function that check for digit
 *
 * @c: function parameter
 *
 * Return: 1 if is digit other wise 0
 */


int _isdigit(int c)
{

	if (c >= '0' && c <= '9')

		return (1);

	else

		return (0);

}
