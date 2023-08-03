#include "main.h"

/**
 * _sqrt_recursion - check the code
 * @n:xhexked
 * Return: Always 0.
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - check the code
 * @n:checked
 * @i:checked
 * Return: Always 0.
 */

int square(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i < n)
		return (square(n, i + 1));
	else
		return (-1);
}
