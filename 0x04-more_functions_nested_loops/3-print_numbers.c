#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 * Return: Always 0
 */

void print_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
		_putchar(n);

	_putchar('\n');
}
