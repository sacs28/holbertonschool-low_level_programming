#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the memory previously allocated
 * @old_size: Size of the allocated space for ptr
 * @new_size: New size of the memory block
 *
 * Return: Pointer to the reallocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;
	char *char_ptr;
	char *char_new_ptr;

	if (ptr == NULL)
	return (malloc(new_size));

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	return (ptr);

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	return (NULL);

	char_ptr = (char *)ptr;
	char_new_ptr = (char *)new_ptr;
	for (i = 0; i < old_size && i < new_size; i++)
	char_new_ptr[i] = char_ptr[i];

	free(ptr);
	return (new_ptr);
}
