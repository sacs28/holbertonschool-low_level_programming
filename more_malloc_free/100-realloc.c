#include <stdlib.h>
#include <string.h>

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
	unsigned int copy_size;

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

	copy_size = (old_size < new_size) ? old_size : new_size;

	if (copy_size > 0)
	memcpy(new_ptr, ptr, copy_size);

	free(ptr);
	return (new_ptr);
}
