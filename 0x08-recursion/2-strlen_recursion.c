#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (*s != '\0')
	{
		i++;
		_strlen_recursion(s + 1);
	}
	else
		return (i);
}
