#include <stdio.h>

/**
 * main - the entry point of the program
 *
 * Return: 0 indicates successful program execution
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
