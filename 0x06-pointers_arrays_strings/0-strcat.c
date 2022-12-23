#include "main.h"

/**
 *_strcat - a function that concatenates two strings.
 * @dest: destination.
 * @src: source.
 * Return: returns a pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int len1 = 0;
	int len2 = 0;

	while (*(dest + len1) != '\0')
	{
		len1 = len1 + 1;
	}
	while (len2 >= 0)
	{
		*(dest + len1) = *(src + len2);
		if (*(src + len2) == '\0')
			break;
		len1 = len1 + 1;
		len2 = len2 + 1;
	}
	return (dest);
}
