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
	int n = 0;
	char str_pc[9] = "_putchar";

	while (n < 9)
	{
		_putchar(str_pc[n]);
		n += 1;
	}
	_putchar('\n');
	return (0);
}
