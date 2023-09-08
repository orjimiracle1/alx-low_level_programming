#include <stdio.h>

/**
 * main - function execution begins
 * Return: zero for success
 */
int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');

	return (0);
}
