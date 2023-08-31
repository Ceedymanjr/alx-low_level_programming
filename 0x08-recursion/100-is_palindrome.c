#include "main.h"
/**
 * is_palindrome - function that returns 1 if is palindrome and 0 if not
 *
 * @s: function parameter
 *
 * Return: return 1 if is palindrome otherwise 0
 */

int is_palindrome(char *s)
{
	int length = 0;

	if (length <= 1)
	{
		return (1);
	}
	if (s[0] != s[length - 1])
	{
		return (0);
	}
	s[length - 1] = '\0';
	return (is_palindrome(s + 1));
}
