#include <stdio.h>
#include "main.h"

/**
 * print_alphabet Use _putchar function to print
 *
 * alphabet a to z
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
