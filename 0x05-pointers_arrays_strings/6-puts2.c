#include "main.h"

/**
 * puts2 - function thatprint any other character of a string
 *
 * @str: string
 *
 * Return: Always 0
 */

void puts2(char *str)
{
	int z;

	for (z = 0 ; str[z] != '\0' ; z++)
	{
		if (z % 2 == 0)
			_putchar(str[z]);
	}
	_putchar('\n');
}
