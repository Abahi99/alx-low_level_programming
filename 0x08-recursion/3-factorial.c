#include "main.h"

/**
 * factorial - check the code
 * @n: checked
 * Return: -1 or 1 or !n.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n *  factorial(n - 1));
}
