#include"main.h"
/**
 * print_binary - function that prints thre binary represantation
 * @n: number to be represanted
 * Return: number
 */
void print_binary(unsigned long int n)
{
	int x, n_count = 0;
	unsigned long int bit_man;

	for (x = 63; x >= 0; x--)
	{
		bit_man = n >> x;

		if (bit_man & 1)
		{
			_putchar('1');
			n_count++;
		}
		else if (n_count)
			_putchar('0');
	}
	if (!n_count)
		_putchar('0');
}
