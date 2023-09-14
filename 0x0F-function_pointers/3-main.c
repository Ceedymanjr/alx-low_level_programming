#include "calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int output;
	char s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	s = argv[2][0];

	if (s != '+' && s != '-' && s != '*' && s != '/' && s != '%')
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	output = (get_op_func(argv[2]))(a, b);
	printf("%d\n", output);
	return (0);;
}
