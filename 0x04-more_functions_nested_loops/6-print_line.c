#include "main.h"

/**
 * print_line - draws straight line,
 * @n: the number of printing -
 */

void print_line(int n)
{
	while (n > 0)
	{
		int i;

		for (i=0, i <= n, i++)
		{
			_putchar('-');
		}
	}
	_putchar('\n');
}
