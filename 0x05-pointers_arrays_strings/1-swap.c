#include "main.h"

/**
 * swap_int - this swaps two integers
 * @a: parameter value 1
 * @b: parameter value 2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
