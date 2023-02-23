#include "main.h"

/**
 * print_line - print a line that draws a straight line
 * @n:  the number of times the character _ should be printed
 * Return: Always 0
 */

void print_line(int n)
{
	int a = 0;

	if (n > 0)
	{
		while (a <= n)
		{
			_putchar('_');
			a++;
		}
	 _putchar('\n');
	}
	else
	_putchar('\n');
}
