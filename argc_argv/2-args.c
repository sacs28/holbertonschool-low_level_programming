#include <stdio.h>

/**
 * main - Prints all command-line arguments, one per line
 * @argc: Argument count (number of arguments)
 * @argv: Array of argument strings
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
