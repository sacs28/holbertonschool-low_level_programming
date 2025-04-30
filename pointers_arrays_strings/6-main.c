#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char str[200];
	char *ptr;

	strcpy(str, "Expect the best. Prepare for the worst. ");
	strcat(str, "Capitalize on what comes.\nhello world! ");
	strcat(str, "hello-world 0123456hello world\thello ");
	strcat(str, "world.hello world\n");

	ptr = cap_string(str);
	printf("%s", ptr);
	printf("%s", str);

	return (0);
}
