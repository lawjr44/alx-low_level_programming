#include <stdio.h>

/**
 * main - this is thhe entry of the program
 * Return: 0
 */

int main(void)
{
	int i = 0;
	long a = 1, b = 2, sum = b;


	while (b + a < 4000000)
	{
		b += a;
		if (b % 2 == 0)
		sum += b;
		a = b - a;
		++i;
	}
	printf("%ld", sum);
	return (0);
}

