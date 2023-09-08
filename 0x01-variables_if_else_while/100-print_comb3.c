#include <stdio.h>

/**
 * main - the function execution begins
 * Return: zero for success
 */
int main(void)
{
	int dig_1, dig_2;

	for (dig_1 = '0'; dig_1 < '9'; dig_1++)
	{
		for (dig_2 = '1'; dig_2 <= '9'; dig_2++)
		{
			if (dig_1 < dig_2)
			{
				putchar(dig_1);
				putchar(dig_2);
				if (dig_1 == '8' && dig_2 == '9')
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar ('\n');

	return (0);
}
