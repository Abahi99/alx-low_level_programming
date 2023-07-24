#include "main.h"

/**
 * _strlen - get the length of a string
 * @s: parameter
 * Return: Always len of s
 */

int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
		++count;

	return (count);
}
