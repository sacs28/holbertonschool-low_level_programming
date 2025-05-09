#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	if (n == -2147483648)
	{
		_putchar('-');
		_putchar('2');
		print_number(147483648);
		return;
	}
	if (n < 0) /* Maneja números negativos */
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10) /* Imprime los dígitos recursivamente */
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0'); /* Imprime el último dígito */
}
