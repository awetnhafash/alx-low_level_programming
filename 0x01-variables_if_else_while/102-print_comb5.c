#include <stdio.h>
/**
 * main - prints combinations of two digit numbers.
 * Return: always 0
 */
int main(void)
{
int e, i, g, h, opt1, opt2;

e = i = g = h = 48;
while (h < 58)
{
	g = 48;
	while (g < 58)
	{
		e = 48;
		while (e < 58)
		{
			i = 48;
			while (i < 58)
			{
				opt1 = (h * 10) + g;
				opt2 = (e * 10) + i;
				if (opt1 < opt2)
				{
					putchar(h);
					putchar(g);
					putchar(' ');
					putchar(e);
					putchar(i);
					if (h == 57 && g == 56 && e == 57 && i == 57)
						break;
					putchar(',');
					putchar(' ');
				}
				i++;
			}
			e++;
		}
		g++;
	}
	h++;
}
putchar('\n');
return (0);
}

