#include "main.h"

/**
 * _strlen - function that return the lenth of string
 * @s: check to char
 * Return: 0
 */
int _strlen(char *s)
{
	int x = 0; /* start the counter from 0*/

	for (; *s++;)
		x++;
	return (x);
}
