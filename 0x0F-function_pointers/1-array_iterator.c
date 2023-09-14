#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator -function that executes a function given as a parameter
 * @array: array of the function
 * @action: pointer of function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;

	for (x = 0 ; x < size ; x++)
		action(array[x]);
}
