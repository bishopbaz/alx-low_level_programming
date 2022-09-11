#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Write a program that prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char xtr;

	for (xtr = 'a' ; xtr <= 'z' ; xtr++)
	{
		putchar(xtr);
	}
	putchar("\n");

	return (0);
}
