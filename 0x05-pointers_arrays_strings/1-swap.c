#include "main.h"
/**
 * swap_int - swaps values of two integers.
 * @a: value of first integer.
 * @b: value of second integer.
 * Return: no return.
 */
void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
