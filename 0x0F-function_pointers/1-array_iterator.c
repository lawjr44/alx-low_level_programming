#include "function_pointers.h"

/**
 * array_iterator - main function
 * @array: pointer to the array to be iterated over
 * @size: size of the array
 * @action: pointer to the function to use
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		exit(EXIT_FAILURE);
	for (i = 0; i < size; i++)
		action(array[i]);
}

