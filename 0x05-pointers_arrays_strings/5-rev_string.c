#include "main.h"

/**
 * rev_string - this function reverse a string
 * @s: parameter string
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	for (i = 0; i < count / 2; i++)
	{
		char k;

		k = s[i];
		s[i] = s[count - 1 - i];
		s[count - 1 - i] = k;
	}
}

