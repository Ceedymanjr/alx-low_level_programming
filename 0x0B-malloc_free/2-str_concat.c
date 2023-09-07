#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concated pointer of new space
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int s1len = 0;
	int s2len = 0;
	char *concat;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s1len++;
	for (i = 0; s2[i] != '\0'; i++)
		s2len++;
	concat = malloc(sizeof(char) * (s1len + s2len) + 1);
	if (concat == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		concat[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		concat[s1len + 1] = s2[i];
	return (concat);
}
