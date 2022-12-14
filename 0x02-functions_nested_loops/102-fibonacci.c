#include <stdio.h>
/**
 * main - prints the add of the Fibonacci numbers
 * Return: always 0.
 * int main(void)
 */
int main(void)
{
	int i;
	long int n1, n2, fn;

	n1 = 1;
	n2 = 2;
	printf("1%d, 1%1d", n1, n2);
	for (i = 0; i < 48; i++)
	{
		fn = n1 + n2;
		printf(", %1d", fn);
		n1 = n2;
		n2 = fn;
	}
	printf("\n");
	return (0);
}
