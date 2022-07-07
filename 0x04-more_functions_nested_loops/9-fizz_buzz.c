#include "main.h"
#include "stdio.h"

/**
 * main - print fizz if the nuber divide by 3 ,
 * buzz if divieded by 5, fizzbuzz if both
 */

int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 15 == 1)
			printf("FizzBuzz ");
		else if (i % 5 == 1)
			printf("Buzz ");
		else if (i % 3 == 1)
			printf("Fizz ");
		else
			printf(i );
	}
	printf("\n");
}
