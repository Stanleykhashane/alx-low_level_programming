#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory.
 * @b: the size of bytes.
 * Return: pointer to the allocated memory.
 * if malloc fails, value is equal to 98.
 */

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
