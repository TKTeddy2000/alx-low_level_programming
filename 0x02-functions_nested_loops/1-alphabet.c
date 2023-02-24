#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: print_alphabet
 * from a - z
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)/* function prints a - z */
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
