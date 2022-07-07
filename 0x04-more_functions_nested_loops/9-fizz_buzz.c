#include "main.h"
#include "stdio.h"

/**
 * main - print fizz if the nuber divide by 3,
 * buzz if divieded by 5, fizzbuzz if both
 * Return: always (0) success
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", i);
		}

		if ( i != 100)
		{
			printf(" ");
		}
	}

	printf("\n");

	return (0);
}
