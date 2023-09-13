#include <stdio.h>

/**
 * main - function execution begins
 * Return: zero(0) for success
 */
int main(void)
{
	long max_value = 4000000;
	long j = 1, k = 2, sum = k;

	while (j + k < max_value)
	{
		k += j;
		if (k % 2 == 0)
		{
			sum += k;
		}
		j = k - j;
	}
	printf("%ld\n", sum);

	return (0);
}
