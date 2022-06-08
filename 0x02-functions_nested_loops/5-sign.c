#include "main.h"



/**
 * print_sign - Determines if the input number.
 *
 * Description: prints the sign of a number.
 *
 * @n: The input number as an integer.
 *
 * Return: 1 prints "+" if n > 0, 0 prints 0 if n = 0, -1 prints "-" if n < 0
 */

int print_sign(int n)

{

	if (n > 0)

	{

		_putchar(43);

		return (1);

	}

	else if (n < 0)

	{

		_putchar(45);

		return (-1);

	}

	else

	{

		_putchar(48);

		return (0);

	}

	_putchar('\n');

}
