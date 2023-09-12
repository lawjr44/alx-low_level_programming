#include "main.h"

/**
 * print_alphabet_x10 - this prints alphabets in lower case ten times
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i;
	char k;

	for (i = 0; i < 10; i++)
	{
		for (k = 'a'; k <= 'z'; k++)
			_putchar(k);
		_putchar('\n');
	}
}

