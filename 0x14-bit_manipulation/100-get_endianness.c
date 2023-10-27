#include "main.h"

/**
 * get_endianness - the function name
 * Return: 1 or 0
 */
int get_endianness(void)
{
	unsigned int number = 1;
	unsigned char *get_address = (unsigned char *)&number;

	return (*get_address == 1);
}
