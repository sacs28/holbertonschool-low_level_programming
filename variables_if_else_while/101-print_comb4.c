#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;
	
	for (i = 0; i <= 7; i++) /* Primer dígito */
	{
		for (j = i + 1; j <= 8; j++) /* Segundo dígito */
		{
			for (k = j + 1; k <= 9; k++) /* Tercer dígito */
			{
				putchar('0' + i); /* Imprime el primer dígito */
				putchar('0' + j); /* Imprime el segundo dígito */
				putchar('0' + k); /* Imprime el tercer dígito */
				if (i != 7 || j != 8 || k != 9) /* Verifica si es la última combinación */
				{
					putchar(','); /* Imprime la coma */
					putchar(' '); /* Imprime el espacio */
				}
			}
		}
	}
	putchar('\n'); /* Salto de línea al final */
	return (0);
}
