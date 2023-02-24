#include"main.h"

/**
 * _islower - Check for lower case
 *
 * @c: This checks input of the function
 *
 * Return: return 1 if 'c' is lowercase
 * Otherwise always 0 (Success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
