#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int is_digit(char *str);
int *create_product_array(int len1, int len2);
char *finalize_result(int *result, int len);
void perform_multiplication(char *num1, char *num2, int *result);
char *multiply(char *num1, char *num2);

/**
 * is_digit - Checks if a string is composed only of digits
 * @str: String to check
 * Return: 1 if all digits, 0 otherwise
 */
int is_digit(char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
		return (0);
		str++;
	}
	return (1);
}

/**
 * create_product_array - Creates and initializes product array
 * @len1: Length of first number
 * @len2: Length of second number
 * Return: Pointer to allocated array
 */
int *create_product_array(int len1, int len2)
{
	int *result = calloc(len1 + len2, sizeof(int));

	return (result);
}

/**
 * perform_multiplication - Performs the actual multiplication
 * @num1: First number string
 * @num2: Second number string
 * @result: Array to store multiplication results
 */
void perform_multiplication(char *num1, char *num2, int *result)
{
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int i, j, carry, sum, n1, n2;

	for (i = len1 - 1; i >= 0; i--)
	{
		n1 = num1[i] - '0';
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			sum = n1 * n2 + result[i + j + 1] + carry;
			carry = sum / 10;
			result[i + j + 1] = sum % 10;
		}
		result[i] += carry;
	}
}

/**
 * finalize_result - Converts product array to string
 * @result: Product array
 * @len: Length of product array
 * Return: Final result as string
 */
char *finalize_result(int *result, int len)
{
	int i = 0, j;
	char *final;

	while (i < len && result[i] == 0)
	i++;

	if (i == len)
	return (strdup("0"));

	final = malloc((len - i + 1) * sizeof(char));
	if (!final)
	return (NULL);

	for (j = 0; i < len; i++, j++)
	final[j] = result[i] + '0';
	final[j] = '\0';

	return (final);
}

/**
 * multiply - Multiplies two positive numbers represented as strings
 * @num1: First number string
 * @num2: Second number string
 * Return: Result as a string
 */
char *multiply(char *num1, char *num2)
{
	int len = strlen(num1) + strlen(num2);
	int *result = create_product_array(strlen(num1), strlen(num2));
	char *final;

	if (!result)
	return (NULL);

	perform_multiplication(num1, num2, result);
	final = finalize_result(result, len);

	free(result);
	return (final);
}

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	char *result;

	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		return (98);
	}
	if (strcmp(argv[1], "0") == 0 || strcmp(argv[2], "0") == 0)
	{
		printf("0\n");
		return (0);
	}
	result = multiply(argv[1], argv[2]);
	if (!result)
	{
		printf("Error\n");
		return (98);
	}
	printf("%s\n", result);
	free(result);
	return (0);
}
