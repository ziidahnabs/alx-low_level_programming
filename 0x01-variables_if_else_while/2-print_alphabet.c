#include <stdio.h>

/**
 * main - print the alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	char c;

	for (c >= 'a' && c <= 'z')
		_putchar(c);
	_putchar('\n');
}
