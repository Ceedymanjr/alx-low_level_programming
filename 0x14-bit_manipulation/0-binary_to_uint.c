#include"main.h"
/**
 * binary_to_uint - function that convert binary to an unsigned int
 * @b: pointer to the string
 * Return: the converted number, or 0 if
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int bit_man = 0;

	if (!b)
		return (0);

	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		bit_man = 2 * bit_man + (b[x] - '0');
	}

	return (bit_man);

}
