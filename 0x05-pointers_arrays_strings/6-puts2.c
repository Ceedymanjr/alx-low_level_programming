#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 * @str: function parameter
 * Return: 0
 */
void puts2(char *str)
{
	int j;

	for (j = 0 ; str[j] != '\0' ; j++)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
