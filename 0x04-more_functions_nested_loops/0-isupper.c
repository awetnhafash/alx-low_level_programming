#include "main.h"
/**
 * _isupper - checks if charactor is an upper case or not.
 * @c: input charactor
 * Return: 1 if is an upper charactor, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
