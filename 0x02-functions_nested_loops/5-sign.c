#include"main.h"

/**
 * print_sign - function that print sign
 *
 * @n: function parameter
 *
 * Return: return 1 if is greater than and 0 if it equal
 * and -1 other wise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}


}
