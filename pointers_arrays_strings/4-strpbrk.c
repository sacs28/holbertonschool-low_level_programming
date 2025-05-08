#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: String to search
 * @accept: Set of bytes to search for
 *
 * Return: Pointer to first matching byte in s, or NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
		if (s[i] == accept[j])
		return (&s[i]);
		}
	}
	return (NULL);
}
