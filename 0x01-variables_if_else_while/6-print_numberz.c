#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n;
	for (n = '0'; n <= '9'; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');

	return (0);
}
