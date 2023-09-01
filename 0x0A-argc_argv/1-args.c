#include "main.h"
/**
 * main - function that print number of argument passed
 * @argc: argumet count
 * @argv:argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
