#include<stdio.h>
/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	int c;
	int d;

	for (c = 0 ; c < 10 ; c++)
	{
		for (d = 0 ; d < 10 ; d++)
		{
			if (c < d && c != d)
			{
				putchar(c + '0');
				putchar(d + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
