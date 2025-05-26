#include <stdlib.h>

/**
 * argstostr - Concatenates all program arguments with newline separators
 * @ac: Argument count
 * @av: Argument vector
 *
 * Return: Pointer to new string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k = 0;
	int total_len = 0;

	if (ac == 0 || av == NULL)
	return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		total_len++;
		total_len++; /* For the newline */
	}
	total_len++; /* For the final null terminator */

	str = malloc(total_len * sizeof(char));
	if (str == NULL)
	return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		str[k++] = av[i][j];
		str[k++] = '\n';
	}
	str[k] = '\0';
	return (str);
}
