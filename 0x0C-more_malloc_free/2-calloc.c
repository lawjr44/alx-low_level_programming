#include "main.h"

/**
 * _calloc - Allocates memory for an array using malloc
 * @nmemb: The number of elements in the array
 * @size: The size of each element in the array
 * Return: A pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t total_size = nmemb * size;
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(total_size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	return (ptr);
}


