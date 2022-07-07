#include "main.h"

/**
 * print_numbers - prints numbers from 1 to 9
 * Return: the result of the operation
 */
void print_numbers(void)
{
	int i;

	i = 0;

	if (i <= 9)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
