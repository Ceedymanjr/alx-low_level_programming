#include"main.h"

/**
 * rev_string - function that revserses a string
 * @s: string
 * Return: Always 0
 */

void rev_string(char *s)
{
	int x;
	char y;
	int count = 0;

	for (x = 0 ; s[x] != '\0' ; x++)
		count++;
	for (x = 0 ; x < count / 2 ; x++)
	{
		y = s[x];
		s[x] = s[count - 1 - x];
		s[count - 1 - x] = y;
	}
}
