#include "function_pointers.h"

/**
 * print_name - Prints the name `name` using the function `f`
 * @name: A pointer to the name to be printed
 * @f: A pointer to the function to be used to print the name
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}



