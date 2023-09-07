#include "main.h"
/**
 * *_calloc - function that allocates memory for an array, using malloc
 * @nmemb: function parameter
 * @size: function parameter
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *outp;

	if (nmemb == 0 || size == 0)
		return (NULL);
	outp = calloc(nmemb, size);
	if (outp == NULL)
		return (NULL);
	else
		return (outp);
}
