#include "main.h"

/**
 * positive_or_negative - function that print numberis negative or positive
 *
 * @i: function parameter
 *
 * Return: Always 0
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);
}
