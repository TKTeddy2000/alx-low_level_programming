#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

/**
 * main - copies a string from one pointer to another
 *	including the terminating null byte (\0)
 *
 *
 * Return: nothing
 */

int main(void)
{
	int i;
	char password[PASSWORD_LENGTH + 1];
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-=[]{}\\|;:'\",.<>/?";
	const size_t charset_size = sizeof(charset) - 1;

	srand(time(NULL));

	for (int i = 0; i < PASSWORD_LENGTH; i++)
	{
	password[i] = charset[rand() % charset_size];
	}

	password[PASSWORD_LENGTH] = '\0';

	printf("Random password: %s\n", password);

	return (0);
}
