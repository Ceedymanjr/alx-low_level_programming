#include "main.h"
/**
 * _islower - function of islower
 *
 * @c: parameter
 *
 * Return: 1 if its lowercase
 * otherwise 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
