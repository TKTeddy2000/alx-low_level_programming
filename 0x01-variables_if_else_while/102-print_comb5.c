#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
		putchar (i / 10 + '0');
		putchar (i % 10 + '0');
		putchar (' ');
		putchar (j / 10 + '0');
		putchar (j % 10 + '0');
		/*putchar (' ');*/
		if (i != 98 && j != 100)
		{
		putchar (',');
		putchar (' ');
		}
		}
	}
	putchar ('\n');
	return (0);
}
