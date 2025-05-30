#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and initializes it to zero
 * @nmemb: Number of elements
 * @size: Size of each element
 *
 * Return: Pointer to allocated memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size;
	unsigned int i;
	char *char_ptr;

	if (nmemb == 0 || size == 0)
	return (NULL);

	total_size = nmemb * size;
	if (total_size / size != nmemb)
	return (NULL);

	ptr = malloc(total_size);
	if (ptr == NULL)
	return (NULL);

	char_ptr = (char *)ptr;
	for (i = 0; i < total_size; i++)
	char_ptr[i] = 0;
	return (ptr);
}
