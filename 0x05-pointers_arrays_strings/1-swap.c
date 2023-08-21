#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: parameter of the function
 * @b: parameter of the function
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
