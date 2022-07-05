#include "main.h"

/**
 * print_sign - prints the sign of a number 
 * @n: the number we want to check
 * Return:1 if + , 0 if 0 , -1 if -
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		retun (0);
	} else 
	{
		_putchar('-');
		return (-1);
	}
}
