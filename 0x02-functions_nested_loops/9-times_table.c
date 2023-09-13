#include "main.h"

/**
 * times_table - the function name
 */
void times_table(void)
{
	int i, k, j;
	int f_d, l_d;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (k > 9)
			{
				f_d = k / 10;
				l_d = k % 10;
				_putchar(',');
				_putchar(' ');
				_putchar(f_d + '0');
				_putchar(l_d + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(k + '0');
			}
		}
		_putchar('\n');
	}
}
