#include <stdio.h>

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i = 0;

	// Recorremos la cadena
	while (str[i] != '\0')
	{
	// Verificamos si el carácter actual es un separador
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
		// Si el siguiente carácter es una letra minúscula, la capitalizamos
		if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
		{
			str[i + 1] = str[i + 1] - 32; // Convertir a mayúscula
		}
		}
		i++;
	}

	// Capitalizar la primera letra de la cadena si es minúscula
		if (str[0] >= 'a' && str[0] <= 'z')
	{
	str[0] = str[0] - 32;
	}

	return str;
}
