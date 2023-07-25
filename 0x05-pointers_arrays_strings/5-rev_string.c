#include "main.h"

/**
 * rev_string - print the string reversed
 * @s: parameter
 * Return: Void.
 */

void rev_string(char *s)
{
	int i, j;
	char c = s[0];

	i = 0;
	while (s[i] != '\0')
		i++;

	for (j = 0; j < i; j++)
	{
		i--
		c = s[j];
		s[j] = s[i];
		s[i] = c;
	}

}
