#include <stdio.h>
#include <stdlib.h>

/**
 * main - the function execution begins
 * Return: zero(0) for success
 */
int main(void)
{
	unsigned int i = 0;
	unsigned long j = 1, k = 2, l, x, y;
	unsigned long max_value = 1844674407370955161;

	while (i < 98)
	{
		if (i == 0)
			printf("%lu", j);
		else if (i == 1)
			printf(", %lu", k);
		else
		{
			k += j;
			j = k - j;
			if (k < max_value)
			{
				printf(", %lu", k);
			}
			else
			{
				l = k / 100;
				l = k / 10;
				x = ((k % 100) / 10);
				x = k % 10;
				y = k % 10;
				printf(", %lu", l);
				printf("%lu", x);
				printf("%lu", y);
			}
		}
		i++;
	}
	printf("\n");

	return (0);
}
