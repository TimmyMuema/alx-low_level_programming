#include "main.h"

/**
 * print_sign - Prints the sign of a given number
 * @n: The number to check
 *
 * Return: 1 if n is gret than zero, 0 if n zero, -1 if n less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

