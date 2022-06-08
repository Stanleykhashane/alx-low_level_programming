#include <stdio.h>
#include "main.h"

/**
 * main -Entry point of the program
 *
 * Description: This program prints _putchar and ends with a new line
 *
 * Return: Aways returns(0)
 */

int main(void)
{
	int str[] = {72, 111, 108, 98, 101, 114, 116, 111, 110};
	int count, sz;

	sz = sizeof(str) / sizeof(int);
	for (count = 0; count < sz; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	return (0);
}
