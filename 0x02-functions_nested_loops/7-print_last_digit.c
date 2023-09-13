#include "main.h"

/**
 * print_last_digit - The function that prints the last digit
 * @n: the number
 * Return: the last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = n * -1;
	return (n % 10);
}
