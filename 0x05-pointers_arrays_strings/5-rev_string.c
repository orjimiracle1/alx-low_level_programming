#include "main.h"

/**
 * rev_string - The function name
 * @s: The string
 */
void rev_string(char *s)
{
	char *str = s;
	char temp;
	int len = 0, i, j;

	while (*(str + len) != '\0')
	{
		len++;
	}
	for (i = 0; i < len - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = temp;
		}
	}
}
