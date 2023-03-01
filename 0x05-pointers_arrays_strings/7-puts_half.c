#include "main.h"

/**
 * puts_half - prints second half of a string
 * @str: function parameter
 * Return: 0
 */
void puts_half(char *str)
{
	int j;
	int length = 0;

	for (j = 0 ; str[j] != '\0' ; j++)
		length++;
	if (length % 2 == 0)
	{
		for (j = length / 2 ; str[j] != '\0'; j++)
			_putchar(str[j]);
		_putchar('\n');
	}
	else if (length % 2 != 0)
	{
		for (j = (length - 1) / 2 ; str[j] != '\0' ; j++)
			_putchar(str[j]);
		_putchar('\n');
	}
}
