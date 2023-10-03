#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	size_t str_len;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}

	str_len = strlen(str);
	dup = malloc(str_len + 1);

	if (dup == NULL)
	{
		return (NULL);
	}

	memcpy(dup, str, str_len);
	dup[str_len] = '\0';

	return (dup);
}
