#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char s[200];
	char *p;

	strcpy(s, "Expect the best. Prepare for the worst. ");
	strcat(s, "Capitalize on what comes.\n");
	strcat(s, "hello world! hello-world 0123456");
	strcat(s, "hello world\thello world.hello world\n");

	p = leet(s);
	printf("%s", p);
	printf("%s", s);

	return (0);
}
