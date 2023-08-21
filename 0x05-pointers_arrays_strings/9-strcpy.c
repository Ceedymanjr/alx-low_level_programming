#include "main.h"

/**
 * *_strcpy - function that copies string pointer including null byte
 * @dest: parametr of the function
 * @src: parameter of the function
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0 ; src[x] != '\0' ; x++)
	{
		dest[x] = src[x];
		dest[x] = '\0';
	}
	return (dest);
}
