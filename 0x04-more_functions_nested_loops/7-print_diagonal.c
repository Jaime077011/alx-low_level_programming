#include "main.c"

/**
 * print_diagonal - draws diagonal line in terminal
 * @n: times to draw the line
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 1; i <= n, i++)
		{
			_putchar('\');
		}
		_putchar('\n');
	} else
	{
		_putchar('\n');
	}
}
