#include "main.h"

/**
* times_table - prints the 9 times table
*
* Return: void
*/
void times_table(void)
{
	int row, col, result;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			result = row * col;
			if (col != 0)  /* Add a space bf every num except the first one */
			{
				_putchar(' ');
			}
			if (result < 10)
			{
				_putchar(result + '0');
			}
			else
			{
				_putchar(result / 10 + '0');  /* Print the tens place */
				_putchar(result % 10 + '0');  /* Print the ones place */
			}
			if (col != 9)  /* Avoid comma space af the last num in the row */
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
