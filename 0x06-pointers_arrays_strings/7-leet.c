#include "main.h"
/**
 * leet - function that encodes a string
 * @str: string to be printed
 * Return: str
 */

char *leet(char *str)
{
	int x;
	int y;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (x = 0 ; str[x] != '\0' ; x++)
	{
		for (y = 0 ; a[y] != '\0' ; y++)
		{
			if (str[x] == a[y])
				str[x] = b[y];
		}
	}
	return (str);
}
