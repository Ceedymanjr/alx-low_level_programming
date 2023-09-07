#include "main.h"
/**
 * *malloc_checked - function that allocate memory
 * @b: function parameter
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	char *outp;

	outp = malloc(b);
	if (outp == NULL)
		exit(98);
	else
		return (outp);
}
