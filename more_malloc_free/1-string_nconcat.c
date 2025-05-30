#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings with limit
 * @s1: First string
 * @s2: Second string
 * @n: Maximum bytes of s2 to concatenate
 * Return: Pointer to new string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i, j;
	char *result;

	s1 = (s1 == NULL) ? "" : s1;

	s2 = (s2 == NULL) ? "" : s2;

	while (s1[len1] != '\0')
	len1++;

	while (s2[len2] != '\0')
	len2++;

	n = (n >= len2) ? len2 : n;

	result = malloc(sizeof(char) * (len1 + n + 1));
	if (result == NULL)
	return (NULL);

	for (i = 0; i < len1; i++)
	result[i] = s1[i];

	for (j = 0; j < n; j++)
	result[len1 + j] = s2[j];

	result[len1 + n] = '\0';
	return (result);
}
