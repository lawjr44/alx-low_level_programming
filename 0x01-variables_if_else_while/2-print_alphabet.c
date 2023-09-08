#include <stdio.h>

/**
 * main - the entry point of the program
 *
 * Return: 0 indicates succesful program execution
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
