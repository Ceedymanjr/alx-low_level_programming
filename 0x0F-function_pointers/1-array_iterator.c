#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator -function that executes a function given as a parameter
 * @array: array of the function
 * @action: pointer of function
 * Return: Always 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int x;

	 if (array == NULL || action == NULL)
                exit(0);

	for (x = 0; x < size; x++)
		action(array[x]);
}
