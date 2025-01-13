#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 8; i++) /* Loop for the first digit */
	{
		for (j = i + 1; j <= 9; j++) /* Loop for the second digit */
		{
			putchar('0' + i); /* Print the first digit */
			putchar('0' + j); /* Print the second digit */
			if (i != 8 || j != 9) /* Check if it's the last combination */
			{
				putchar(','); /* Print the comma */
				putchar(' '); /* Print the space */
			}
		}
	}
	putchar('\n'); /* Print a newline at the end */
	return (0);
}
