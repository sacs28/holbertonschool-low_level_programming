#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * @a: Pointer to the first element of the matrix (treated as 1D array)
 * @size: Size of the matrix (number of rows or columns, since it's square)
 */
void print_diagsums(int *a, int size)
{
	int primary_sum = 0;
	int secondary_sum = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		primary_sum += a[i * size + i];
		secondary_sum += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", primary_sum, secondary_sum);
}
