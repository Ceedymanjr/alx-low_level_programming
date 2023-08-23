#include "main.h"

/**
 * _strcmp - function that copies a strings
 *
 * @s1: string 1
 * @s2: string 2
 * Reeturn: Always 0
 */

int _strcmp(char *s1, char *s2)
{
	int x;

	for (x = 0 ; s1[x] != '\0' || s2[x] != '\0' ; x++)
	{
		if (s1[x] != s2[x])
		{
			if (s1[x] < s2[x])
				return (s1[x] - s2[x]);
			else if (s2[x] < s1[x])
				return (s1[x] - s2[x]);
		}
	}
	return (0);
}
