#include "main.h"

/**
 * 
 * main -Entry point of the code
 *
 * success : Always 0
 *
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a';ch <= 'z'; ch++)
		_putchar(ch);

	_putchar('\n');
}
