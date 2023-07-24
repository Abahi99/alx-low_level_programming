#include "main.h"

/**
 * print_rev - print the string reverse
 * @s: parameter
 * Return: Void.
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
