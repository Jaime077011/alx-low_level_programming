#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 t0 9,
 * exept 2 and 4
 */

void print_most_numbers(void)
{
	int i;

	i = 0;

	while ( i != 2 || i != 4)
	{
		for (i < 10; i++)
		{
			_putchar(i + '0');
		}

		_putchar('\n');
	}
}
