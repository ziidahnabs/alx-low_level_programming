#include "main.h"

/**
 * print_line - print a line that draws a straight line
 * @n:  the number of times the character _ should be printed
 * Return: Always 0
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
