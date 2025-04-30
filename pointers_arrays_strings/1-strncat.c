#include "main.h"

/**
 * _strncat - Concatenates two strings with a byte limit
 * @dest: The destination string
 * @src: The source string to append to dest
 * @n: Maximum number of bytes to use from src
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (n--  && *src != '\0')
	{
	*ptr++ = *src++;
	}
	return dest;
}
