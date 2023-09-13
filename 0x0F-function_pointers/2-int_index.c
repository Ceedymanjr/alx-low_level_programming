#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - function that searches for an integer
 * @array: array to be search
 * @size: size of the array
 * @cmp: pointer to the function
 * Return: Aways 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]) == 1)
			return (x);
	}
	return (-1);
}
