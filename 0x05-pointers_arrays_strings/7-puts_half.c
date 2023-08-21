#include "main.h"

/**
 * puts_half - function that print half of string
 *
 * @str: string
 *
 * Return: Always 0
 */


void puts_half(char *str)
{
	int x, n;
	int count = 0;

	for (x = 0 ; str[x] != '\0' ; x++)
	{
		count++;
		n = count - 1 / 2;
	}
	for (x = n + 1 ;  str[x] != '\0' ; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
