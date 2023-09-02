#include "main.h"
/**
* _strstr - Entry point
* @haystack: input
* @needle: input
* Return: Always 0 (Success)
*/

char *_strstr(char *haystack, char *needle)
{
	char *l = haystack;
	char *p = needle;

	while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	return (0);
}
