#include "main.h"
/**
 * _strncat - function that concatinates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of character
 * Return: concatinated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0;
	int srclen = 0;
	int x;

	for (x = 0; dest[x] != '\0' ; x++)
		destlen++;
	for (x = 0 ; src[x] != '\0' ; x++)
		srclen++;
	for (x = 0 ; x < n ; x++)
		dest[destlen + x] = src[x];
	return (dest);

}
