#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array
 * @array: The array to search through
 * @size: Number of elements in the array
 * @cmp: Pointer to the comparison function
 *
 * Return: Index of first matching element
 * or -1 if none found or invalid input
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
