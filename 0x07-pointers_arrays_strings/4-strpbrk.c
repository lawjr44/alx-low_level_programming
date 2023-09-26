#include "main.h"

/**
 * _strpbrk - this function searches a string for any of a set of bytes
 * @s: parameter input
 * @accept: parameter input
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
		if (*s == accept[i])
		return (s);
		}
	s++;
	}
	return ('\0');
}

