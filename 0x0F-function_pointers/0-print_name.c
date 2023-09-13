#include "function_pointers.h"
#include <stdio.h>
#include<stddef.h>
/**
 * print_name - function that print name
 * @name: parameter function
 * @f: pointer to the function
 * Return: Always 0
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

