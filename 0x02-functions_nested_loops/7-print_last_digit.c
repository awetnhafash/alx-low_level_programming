#include "main.h"
/**
 * print_last_digit - prints last digit of a number.
 * @i: an integerr input numner
 * Return: last digit
 */
int print_last_digit(int i)
{
	int ld;

	ld = i % 10;
	if (ld < 0)
	{
		_putchar(-ld);
		return (-ld);
	}
	else
	{
		_putchar(ld);
		return (ld);
	}
}
