#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y >= 10)
				_putchar('1');
			_putchar(y % 10 + '0');
		}
		_putchar('\n');
	}
}
