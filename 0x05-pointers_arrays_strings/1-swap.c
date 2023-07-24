#include "main.h"

/**
 * swap_int - swap the two variables
 * @a: int parameter
 * @b: int parameter
 * Return: Nothings.
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
