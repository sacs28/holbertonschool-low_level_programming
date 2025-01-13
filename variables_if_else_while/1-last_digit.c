#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point of the program
*
* Description: This program generates a random number, calculates its last
* digit, and prints a message based on the value of the last digit.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n, last_digit;

	srand(time(0)); /* Initializes the random number generator */
	n = rand() - RAND_MAX / 2; /* Generates a random number */

	last_digit = n % 10; /* Gets the last digit of the number */

	printf("Last digit of %d is %d", n, last_digit);

	if (last_digit > 5)
	printf(" and is greater than 5\n");
	else if (last_digit == 0)
	printf(" and is 0\n");
	else
	printf(" and is less than 6 and not 0\n");
	return (0);
}
