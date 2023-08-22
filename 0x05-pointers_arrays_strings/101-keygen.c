#include <stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - main entry point
 * Return: Always -
 */

int main(void)
{
	int arry[100];
	int x, n;
	int sum = 0;

	srand(time(NULL));

	for (x = 0 ; x < 100 ; x++)
	{
		arry[x] = srand() % 72;
		sum += (arry[x] + '0');
		putchar(arry[x] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum + = n ; putchar(n + '0');
			break;

		}
	}
	return (0);
}
