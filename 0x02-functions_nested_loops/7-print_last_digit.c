#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: what we check
 * Return: the value of last digit
 */

int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;	
	a = n % 10;
	_putchar (a);
	return (a);
}
