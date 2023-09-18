#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

/**
 * random_char - The function name
 * Return: NOthing
 */
char random_char(void)
{
	return (('A' + rand()) % ('z' - 'A' + 1));
}

/**
 * main - The main function
 * Return: nothing
 */
int main(void)
{
	int i = 0;

	srand(time(NULL));
	char password[PASSWORD_LENGTH + 1];

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = random_char();
	}
	password[PASSWORD_LENGTH] = '\0';

	printf("%s\n", password);
	return (0);
}
