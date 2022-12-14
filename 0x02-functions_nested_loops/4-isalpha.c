#include "main.h"
/**
 * _isalpha - identifies an alphabet.
 * @c : is a character in ASCII code
 * Return: 1 if alphabet otherwise 0
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90 || c > 96 && c < 123)
		return (1);
	else
		return (0);
}
