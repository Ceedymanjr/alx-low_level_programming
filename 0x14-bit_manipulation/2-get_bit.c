#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number of index
 * @index: startig from 0
 * Return: the value of the bit at index index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_man;

	if (index > 63)
		return (-1);

	bit_man = (n >> index) & 1;

	return (bit_man);
}
