#include "main.h"
/**
 * _puts_recursion - function that print a string with a new line
 *
 * @s: parameter to the function
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
	_puts_recursion(s + 1);
	}
	_putchar('\n');
}
