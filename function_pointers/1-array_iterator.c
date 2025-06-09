#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element of an array
 * @array: The array to process
 * @size: Size of the array
 * @action: Pointer to the function to execute on each element
 *
 * Description: This function iterates through each element of the array
 * and applies the given function to it.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
