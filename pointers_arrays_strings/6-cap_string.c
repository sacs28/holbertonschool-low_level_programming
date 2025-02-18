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
	char separators[] = " \t\n,;.!?\"(){}";
	int j;
	/* Capitalize first letter if it's a lowercase letter */
	if (str[i] >= 'a' && str[i] <= 'z')
        str[i] -= 32;
	/* Iterate through the string */
	while (str[i] != '\0')
	{
	/* Check if current character is a separator */
	for (j = 0; separators[j] != '\0'; j++)
	{
	if (str[i] == separators[j] && str[i + 1] >= 'a' && str[i + 1] <= 'z')
	{
	str[i + 1] -= 32; /* Capitalize the next character */
	break;
	}
	}
	i++;
	}
	return str;
}
