#include <stdio.h>
/**
 * mani - prints hexadecimals in lowercase
 * Return: always 0
 */
int main(void)
{
	int i;
	int b;

	{
		for (i = 48; i < 58; i++)
			putchar (i);
	}
	{
		for (b = 97; b < 103; b++)
			putchar (b);
	}
	putchar ('\n');
	return (0);
}
