#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring
 * @haystack: The string to search in
 * @needle: The substring to search for
 *
 * Return: Pointer to beginning of located substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	if (*needle == '\0')
	return (haystack);

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		return (haystack);
		haystack++;
	}
	return (NULL);
}
