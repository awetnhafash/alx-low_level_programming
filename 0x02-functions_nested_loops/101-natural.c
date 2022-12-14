#include <stdio.h>
/**
 * main - prints natural numbers below 1024 that are multiple of 3 or 5.
 * Return: always 0.
 */
int main(void)
{
	int i, j;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			j += i;
	}
	printf("%d\n", j);
	return (0);
}
