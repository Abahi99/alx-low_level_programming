#include "main.h"

/**
 * rev_string - print the string reversed
 * @s: parameter
 * Return: Void.
 */

void rev_string(char *s)
{
	int i, j;
	char c;

	for (i = 0; s[1] != '\0'; ++i)
		;

	for (j = 0; j < i / 2; j++)
	{
		c = s[j];
		s[j] = s[i - 1 - j];
		s[i - 1 - j] = c;
	}

}
