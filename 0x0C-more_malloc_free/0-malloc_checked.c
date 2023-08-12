#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - check the code
 * @b:checked
 * Return: 98 or ptr.
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
