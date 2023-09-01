#include "main.h"

/**
 * main - function that print all the argument
 * @argc: argument count
 * @argv: rgument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int x;
	(void)argv;

	for (x = 0 ; x < argc ; x++)
		printf("%d\n", argc[x]);
	return (0);

}
