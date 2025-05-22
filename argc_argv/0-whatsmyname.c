#include <stdio.h>

/**
 * main - Prints the program's name followed by a new line
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 * Return: Always returns 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}
