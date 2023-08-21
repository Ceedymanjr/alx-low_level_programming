#include "main.h"

/**
 * print_rev - function that print a string in reverse
 * @s: string
 * Return: Always 0
 */

void print_rev(char *s)
{
	int x;
	int count = 0;

	for (x = 0 ; s[x] != '\0' ; x++)
		count++;
	for (x = count - 1 ; x >= 0 ; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
