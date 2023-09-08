#include <stdio.h>

/**
 * main - main program execution begins
 * Return: zero(0) for success
 */
int main(void)
{
	int dig_1, dig_2, dig_3;

	for (dig_1 = '0'; dig_1 <= '9'; dig_1++)
	{
		for (dig_2 = '1'; dig_2 <= '9'; dig_2++)
		{
			for (dig_3 = '2'; dig_3 <= '9'; dig_3++)
			{
				if (dig_1 < dig_2 && dig_2 < dig_3)
				{
					putchar(dig_1);
					putchar(dig_2);
					putchar(dig_3);
					if (dig_1 == '7' && dig_2 == '8' && dig_3 == '9')
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
