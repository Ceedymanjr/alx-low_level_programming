#include "main.h"
/**
 * _strncpy - function that copis two strings
 * @dest: destination string
 * @src: source string
 * @n: number of string
 * Return: destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0 ; j < n && src[j] != '\0' ; j++)
		dest[j] = src[j];
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
