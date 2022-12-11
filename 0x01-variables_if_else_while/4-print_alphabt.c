#include <stdio.h> 
/**
 * main - prints lowercase letters except e and q 
 * Return: always 0
 */
int manin(void)
{
	int i;
	for (i = 97; i < 123; i++)

	{
		if (i != 101 && i!= 113)
			putchar(i);
	}
	putchar('\n'):
	return (0)
}

