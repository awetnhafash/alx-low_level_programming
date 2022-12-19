#include "main.h"

/**
 * puts2 - prints one char and skips the next one.
 * @str: input string.
 * Return: no return.
 */
void puts2(char *str)
{
	int length = 0;

	while (length >= 0)
	{
		if (str[length] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (length % 2 == 0)
			_putchar(str[length]);
		length++;
	}
}
