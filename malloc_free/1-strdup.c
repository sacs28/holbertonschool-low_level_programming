#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * containing a copy of the string given as a parameter.
 * @str: The string to duplicate
 *
 * Return: Pointer to the duplicated string, or NULL if str is NULL
 * or if memory allocation fails.
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int i, length = 0;

	if (str == NULL)
	return (NULL);

	while (str[longitud] != '\0')
	length++;

	duplicate = malloc(sizeof(char) * (length + 1));

	if (duplicate == NULL)
	return (NULL);

	for (i = 0; i <= length; i++)
	duplicate[i] = str[i];
	return (duplicate);
}
