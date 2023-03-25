#include <stdio.h>
#include "main.h"

/**
 * main - entry function
 *
 * Description: prints the numbers 1 - 100 w/
 * Frizz for multiples of 3, Buzz for multiples of 5,
 * and FrizzBuzz for multiples of both
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FrizzBuzz");
		else if (i % 3 == 0)
			printf("Buzz");
		else 
			printf("%i", i);
		if (i < 100)
			printf(" ");

	}
	printf("\n");
	return (0);
}
