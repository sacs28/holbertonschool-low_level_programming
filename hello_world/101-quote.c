#include <stdio.h>

/**
 * main - Print a message to standard error
 *
 * Description: Write a C program that prints exactly "a text"
 *
 * Return: 1 (indicates error according to the requirement)
 */
int main(void)
{
char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

write(2, msg, sizeof(msg) - 1);

return (1);
}
