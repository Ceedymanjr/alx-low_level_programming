#include "main.h"
/**
 *_memcpy - function that copies memory area
 *@dest: memory where is stored
 *@src: memory where is copied
 *@n: number of bytes
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = n;

	for (; x < y ; x++)
	{
		dest[x] = src[y];
		n--;
	}
	return (dest);
}

