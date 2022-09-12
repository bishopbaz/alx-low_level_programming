#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int x, y, v, w;

	{
	for (x = 48; x <= 57; x++)
	{
	for (y = 48; y <= 57; y++)
		{
		for (v = 48; v <= 57; v++)
		{
			for (w = 48; w <= 57; w++)
				{
				if (((v + w) > (x + y) && v >= x) || x < v)
				{
					putchar(x);
					putchar(y);
					putchar(' ');
					putchar(v);
					putchar(w);
				if (x + y + v + w == 227 && x == 57)
				{
					break;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
				}
				}
		}
		}
	}
	}
	putchar('\n');

	return (0);
}
