#include <stdio.h>

/**
 * main - Prints the number of arguments passed to it
 * @argc: Argument count (includes the program name)
 * @argv: Argument vector (unused in this program)
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
