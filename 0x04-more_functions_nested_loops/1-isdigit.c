#include "main.h"

/**
 * _isdigit - checks for digits
 * @c - input numbers
 * Return: 1 for the digits otherwise 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
