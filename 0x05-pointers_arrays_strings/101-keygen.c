#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

/**
 * main - copies a string from one pointer to another
 *	including the terminating null byte (\0)
 *
 * @i: source of string parameter input
 *
 * Return: nothing
 */

int main(void)
{
	srand(time(NULL));
	char password[PASSWORD_LENGTH + 1];
	const char valid_chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	for (int i = 0; i < PASSWORD_LENGTH - 1; i++)
	{
	password[i] = valid_chars[rand() % (sizeof(valid_chars) - 1)];
	}

	password[PASSWORD_LENGTH - 1] = 2772 % 10 + '0';
	password[PASSWORD_LENGTH] = 0;

	printf("%s\n", password);

	return (0);
}
