#include "main.h"

/**
 * *string_nconcat - function that concatenates two strings
 * @n: number of strings
 * @s1: parameter
 * @s2: parametre
 * Return: newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	char *outp;
	unsigned int s1len = 0;
	unsigned int s2len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s1len++;
	for (i = 0; s2[i] != '\0'; i++)
		s2len++;
	outp = malloc(sizeof(char) * (s1len + n) + 1);
		if (outp == NULL)
			return (NULL);
		if (n > s2len)
		{
			for (i = 0; s1[i] != '\0'; i++)
				outp[i] = s1[i];
			for (i = 0; s2[i] != '\0'; i++)
				outp[s1len + 1] = s2[i];
		}
		else
		{
			for (i = 0; s1[i] != '\0'; i++)
				outp[i] = s1[i];
			for (i = 0; i < n; i++)
				outp[s1len + i] = s2[i];
			outp[s1len + i] = '\0';
		}
		return (outp);
}
