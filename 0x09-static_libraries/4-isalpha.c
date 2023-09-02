#include"main.h"

/**
 * _isalpha - function that print alphabet
 *
 * @c: function parameter
 * Return: return 1 if is alphabet other wise 0
 */

int _isalpha(int c)
{
	if ((c >= 98 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
