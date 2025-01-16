#include <stdio.h>

/**
 * main - Finds and prints the largest prime factor of 612852475143.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long number = 612852475143;
	long divisor = 2;
	long largest = 0;

	while (number > 1)
	{
		if (number % divisor == 0) /* Si divisor es un factor */
		{
			largest = divisor;
			number /= divisor; /* Divide el número */
		}
		else
		{
			divisor++; /* Incrementa el divisor */
		}
	}
	printf("%ld\n", largest); /* Imprime el mayor factor primo */
	return (0);
}
