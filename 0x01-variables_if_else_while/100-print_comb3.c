#include <stdio.h>

/**
 * main - this is the main entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int x;
	int y;


	for (x = 0 ; x < 10 ; x++)
	{
		for (y = 1 ; y < 10 ; y++)
		{
			if (x < y && x != y)
			{
				putchar(x + '0');
				putchar(y + '0');
				if (x + y != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}

	}
	putchar('\n');
	return (0);
}
