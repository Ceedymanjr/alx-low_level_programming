#include "main.h"

/**
 * print_array - function that print n elements of an array
 * @a: array
 * @n: numbers of array
 * Rerurn: Always
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0 ; x < n ; x++)
	{
		printf("%d", a[x]);
		if (x < n - 1)
			printf(",");
	}
	printf("\n");
}