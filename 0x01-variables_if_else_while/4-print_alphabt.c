#include <stdio.h>

/**
 * main - the entry point of the program
 *
 * Return: 0 indicates successful program execution
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}

