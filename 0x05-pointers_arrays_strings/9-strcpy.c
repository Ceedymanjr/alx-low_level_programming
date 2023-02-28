#include "main.h"

/**
 * _strcpy - function that copies the string
 * @dest: destination parameter
 * @src: source parameter
 * Return: dest
 */


char *_strcpy(char *dest, char *src)
{
	int x;

	if (dest == NULL)
		return (NULL);
	for (x = 0 ; src[x] != '\0' ; x++)
		dest[x] = src[x];
	return (dest);
}
