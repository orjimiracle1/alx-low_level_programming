#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - The function name
 * @n: The number
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
			else
				printf("%d, ", i);
		}
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d, ", i);
		}
		_putchar('\n');
	}
}
