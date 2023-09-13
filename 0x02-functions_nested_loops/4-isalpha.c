#include "main.h"

/**
 * _isalpha - The function name
 * @c: The char holder
 * Return: 1 for success
 */
int _isalpha(int c)
{
	return (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z');
}
