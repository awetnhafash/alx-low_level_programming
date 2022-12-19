#include "main.h"

/**
 * _puts - prints string to stdout.
 * @str: inputs a string.
 * Return: no return.
 */
void _puts(char *str)
{
	int length = 0;

	while (length >= 0)
	{
		if (str[length] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[length]);
		length++;
	}
}
