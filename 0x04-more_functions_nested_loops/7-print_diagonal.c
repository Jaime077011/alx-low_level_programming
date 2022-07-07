#include "main.c"

/**
 * print_diagonal - draws diagonal line in terminal
 * @n: times to draw the line
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i, j;

		for (i = 0; i < n, i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
					_putchar('\\');
				else if (j < i)
					_putchar(' ');
			}
		}
		_putchar('\n');
	} else
	{
		_putchar('\n');
	}
}
