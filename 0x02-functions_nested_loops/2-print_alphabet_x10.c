#include "main.h"
/**
 * main - prints lowercase letters 10 times
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 97; j < 123; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
	return(0);
}
