#include "main.h"

/**
 * *_strncat -  function that concatenates two strings
 *
 * @dest: function parameter
 *
 * @src: function parameter
 *
 * Return: dest
 */


char *_strncat(char *dest, char *src, int n)
{
	int x;
	int len = strlen(dest);


	for (x = 0 ; x < n && * src != '\0' ; x++)
	{
		dest[len + x] = src[x];
		src++;
	}
	dest[len + x] = '\0';
	return (dest);
}
