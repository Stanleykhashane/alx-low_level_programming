#include "main.h"

/**
 * _strcpy - copies  src to  dest.
 * @dest:char
 * @src:char
 * Return:char
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
