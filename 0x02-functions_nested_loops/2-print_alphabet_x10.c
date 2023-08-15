#include "main.h"

/**
 * print_alphabet_x10 - fubction that print alphabet x10
 *
 * Return: Alway 0
 */

void print_alphabet_x10(void)
{
	char x;
	char y;

	for (x = 0 ; x <= 10 ; x++)
	{
		for (y = 'a' ; y <= 'z' ; y++)
		{
			_putchar(y);
		}
		_putchar('\n');
	}
}
