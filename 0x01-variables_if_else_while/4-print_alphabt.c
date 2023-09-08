#include <stdio.h>

/**
 * main - the function execution begins
 * Return: zero for success
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'q' || i == 'e')
			continue;
		else
			putchar(i);
	}
	putchar('\n');

	return (0);
}
