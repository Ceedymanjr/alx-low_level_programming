#include "main.h"

/**
 * _strlen - function that return the length of string
 * @s: string
 * Return: count
 */

int _strlen(char *s)
{
	int x;
	int count = 0;

	for (x = 0 ; s[x] != '\0' ; x++)
		count++;
	return (count);
}
