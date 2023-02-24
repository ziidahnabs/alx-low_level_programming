#include <stdio.h>

/**
 * main - print alphabet i lowercase
 * Return: 0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (!(c == 'q' || c == 'e'))
			putchar(c);
	}
	putchar('\n');
}
