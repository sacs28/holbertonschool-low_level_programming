#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 98; num1++) /* Primer número */
	{
		for (num2 = num1 + 1; num2 <= 99; num2++) /* Segundo número */
		{
			putchar('0' + num1 / 10); /* Dígito decenas del primer número */
			putchar('0' + num1 % 10); /* Dígito unidades del primer número */
			putchar(' ');             /* Espacio separador */
			putchar('0' + num2 / 10); /* Dígito decenas del segundo número */
			putchar('0' + num2 % 10); /* Dígito unidades del segundo número */
			if (num1 != 98 || num2 != 99) /* Verifica si es la última combinación */
			{
				putchar(','); /* Imprime la coma */
				putchar(' '); /* Imprime el espacio */
			}
		}
	}
	putchar('\n'); /* Salto de línea al final */
	return (0);
}
