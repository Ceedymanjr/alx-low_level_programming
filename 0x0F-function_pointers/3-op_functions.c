#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - function that add two numbers
 * @a: function parameter
 * @b: function parameter
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that subtract b from a
 * @a: function parameter
 * @b: function parameter
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function that multiply two numbers
 * @a: function parameter
 * @b: function parameter
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function that divide two numbers
 * @a: function parameter
 * @b: function parameter
 * Return: a / b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
	return (a / b);
}
/**
 * op_mod - function that divide two numbers and return reminder
 * @a: function parameter
 * @b: function parameter
 * Return: a % b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
	return (a % b);
}
