#include "main.h"

/**
 * _isalpha - function of alphabet checks
 *
 * @c: parameter to be check
 *
 * Return: 1 if its alphabet
 * and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}

