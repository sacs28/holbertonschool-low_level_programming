#include <stdlib.h>
#include <string.h>

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

	if (nmemb == 0 || size == 0)
	return (NULL);

	total_size = nmemb * size;
	if (total_size / size != nmemb)
	return (NULL);
	ptr = malloc(total_size);
	if (ptr == NULL)
	return (NULL);
	memset(ptr, 0, total_size);
	return (ptr);
}
