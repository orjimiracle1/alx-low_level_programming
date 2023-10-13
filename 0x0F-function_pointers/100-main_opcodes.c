#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Prints the opcodes of the main function.
 * @num_bytes: The number of bytes to print.
 */
void print_opcodes(int num_bytes);

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 * Return: 0 for success, 1 for incorrect argument count,
 * 2 for negative num_bytes.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Error\n");
		exit(1);
	}

	int num_bytes = atoi(argv[1]);

	print_opcodes(num_bytes);
	return (0);
}

/**
 * print_opcodes - Prints the opcodes of the main function.
 * @num_bytes: The number of bytes to print.
 */
void print_opcodes(int num_bytes)
{
	if (num_bytes <= 0)
	{
		fprintf(stderr, "Error\n");
		exit(2);
	}

	void *main_function_address = &print_opcodes;

	for (int i = 0; i < num_bytes; i++)
	{
		printf("%02x", *((unsigned char *)main_function_address + i));
		if (i < num_bytes - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
}

