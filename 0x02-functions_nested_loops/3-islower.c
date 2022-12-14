#include "main.h"
/**
 * _islower - identifies if it is lower case or not
 * Return: 1 if lower case else 0
 *@c : char in ascii code.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
