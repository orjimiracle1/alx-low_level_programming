#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * main - Entry point
 * @argc: The argument count
 * @argv: The argument vector
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int coins_array[] = {25, 10, 5, 2, 1};
	int i;
	int cent = 0;
	int size_of_array;
	int count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}
	else
	{
		cent = atoi(argv[1]);
		size_of_array = sizeof(coins_array) / sizeof(coins_array[0]);
		for (i = 0; i < size_of_array; i++)
		{
			while (cent >= coins_array[i])
			{
				cent -= coins_array[i];
				count++;
			}
			if (cent == 0)
				break;
		}
		printf("%d\n", count);
	}

	return (0);
}

