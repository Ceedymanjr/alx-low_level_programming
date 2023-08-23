#include "main.h"

/**
 * reverse_array - function that reverses an array
 *
 * @a: function paraameter
 *
 * @n: function parameter
 *
 * Return: always 0
 */


void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0 ; x < n / 2 ; x++)
	{
		y = a[x];
		a[x] = a[n - 1 - x];
		a[n - 1 - x] = y;
	}
}
