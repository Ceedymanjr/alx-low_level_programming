#include "main.h"

/**
 * *rot13 - function that encodes the string to rot13
 *
 * @s: function parameter
 *
 * Return: s
 */


char *rot13(char *s)
{
	int x, y;
	char *a = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *b = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (x = 0 ; s[x] != '\0' ; x++)
	{
		for (y = 0 ; a[y] != '\0' ; y++)
		{
			if (s[x] == a[y])
			{
				s[x] = b[y];
				break;
			}
		}
	}
	return (s);
}
