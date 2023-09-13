#include "main.h"

/**
 * print_sign - The function name
 * @n: The number
 * Return: The sign of a number according
 * the number
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
