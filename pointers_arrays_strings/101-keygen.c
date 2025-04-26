#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * main - Generates random valid passwords for 101-crackme
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, sum, diff;
	char password[100];

	srand(time(0));

	sum = 0;
	i = 0;

	while (sum < 2772)
	{
		password[i] = 33 + rand() % 94; /* Caracteres ASCII imprimibles */
		sum += password[i];
		i++;
	}
	password[i] = '\0';

	if (sum != 2772)
	{
		diff = sum - 2772;

	for (i = 0; password[i]; i++)
	{
		if (password[i] >= (33 + diff))
		{
			password[i] -= diff;
			break;
		}
	}
	}
	printf("%s", password);
	return (0);
}
