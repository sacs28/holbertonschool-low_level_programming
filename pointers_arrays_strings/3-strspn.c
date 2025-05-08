#include "main.h"
#include <stddef.h>

/**
 * _strspn - Gets the length of a prefix substring
 * @s: String to analyze
 * @accept: String containing accepted characters
 *
 * Return: Number of bytes in the initial segment of s
 *         consisting only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;
	char *a;

	while (*s != '\0')
	{
		found = 0;
		a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				found = 1;
				break;
			}
			a++;
		}
		if (!found)
		break;
		count++;
		s++;
	}
	return (count);
}
