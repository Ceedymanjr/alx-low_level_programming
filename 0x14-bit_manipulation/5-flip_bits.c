#include "main.h"
/**
 * flip_bits - function that  returns the number of bits you would need
 * @n: number
 * @m: number
 * Return: number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, n_count = 0;
	unsigned long int bit_man;
	unsigned long int exclusive = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		bit_man = exclusive >> x;
		if (bit_man & 1)
			n_count++;
	}
	return (n_count);
}
