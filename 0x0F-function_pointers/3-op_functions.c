#include "calc.h"
#include <stdio.h>
/**
 * op_add - functiom that add two numbers
 * @a: function parameter
 * @b: function parameter
 * Return: a and b
 */
int op_add(int a, int b)
	return (a '+' b);

/**
 * op_sub - functiom that subtract b from a
 * @a: function parameter
 * @b: function parameter
 * Return: a and b
 */
int op_sub(int a, int b)
	return (a '-' b);
/**
 * op_mul - functiom that multiply two numbers
 * @a: function parameter
 * @b: function parameter
 * Return: a and b
 */
int op_mul(int a, int b)
	return (a '*' b);
/**
 * op_div - functiom that divide two numbers
 * @a: function parameter
 * @b: function parameter
 * Return: a and b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Erroe\n");
		exit(100);
	}
	else
	return (a / b);
}
/**
 * op_mod - functiom that divide two numbers and return reminder
 * @a: function parameter
 * @b: function parameter
 * Return: a and b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		pintf("Error\n");
		exit(100);
	}
	else
	return (a % b);
}
