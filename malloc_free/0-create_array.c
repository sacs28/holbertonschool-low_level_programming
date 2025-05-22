#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and -
 * initializes it with a specific char
 * @size: Size of the array to create
 * @c: Character to initialize the array with
 *
 * Return: Pointer to the allocated array, -
 * or NULL if size is 0 or allocation fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	return (NULL);

	array = malloc(size * sizeof(char));

	if (array == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	array[i] = c;

	return (array);
}
