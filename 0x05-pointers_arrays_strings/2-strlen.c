#include "main.h"

/**
 * _strlen - get the length of a string
 * @s: parameter
 * Return: Always len of s
 */

int _strlen(char *s)
{
	int count;

	for (cout = 0; *s != '\n'; s++)
		++count;

	return (count);
}
