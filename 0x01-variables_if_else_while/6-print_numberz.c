#include <stdio.h>

/**
 * main - the entry point of the program
 *
 * Return: 0 indicates successful program execution
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}

