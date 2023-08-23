#include "main.h"

/**
 * *_strcat - function that concatenates two strings
 *
 * @dest: destination
 * @src: string
 * Return: Always 0
 */


char *_strcat(char *dest, char *src)
{
	int x;
	int srclen = 0;
	int destlen = 0;

	for (x = 0 ; dest[x] != '\0' ; x++)
		destlen++;
	for (x = 0 ; src[x] != '\0' ; x++)
		srclen++;
	for (x = 0 ; x <= srclen ; x++)
		dest[destlen + x] = src[x];
	return (dest);
}
