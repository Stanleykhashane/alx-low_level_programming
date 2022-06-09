#include "main.h"

/**
 * print_line - prints straight line (n)-number times.
 * @n: the number of times the '_' is printed
 * Return: a straight line
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
