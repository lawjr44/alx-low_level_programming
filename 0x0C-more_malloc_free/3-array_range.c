#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: The minimum value in the array
 * @max: The maximum value in the array
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int size = max - min + 1;
	int *array = NULL;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	array = malloc(sizeof(int) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = min + i;
	}

	return (array);
}

