#include "main.h"

/**
 * swap_int - function that swap the val  two integers
 * @a: int a
 * @b: int b
 * Return: 0 if successfull
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
