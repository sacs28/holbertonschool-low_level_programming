#include <stdlib.h>
#include <stdio.h>

/**
 * count_words - Counts the number of words in a string
 * @str: The string to analyze
 * Return: Number of words
 */
int count_words(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str)
	{
		if (*str == ' ')
		{
			in_word = 0;
		}
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}

/**
 * strtow - Splits a string into words
 * @str: The string to split
 * Return: Pointer to an array of strings (words), or NULL on failure
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, len, word_count;

	if (str == NULL || *str == '\0')
	return (NULL);

	word_count = count_words(str);
	if (word_count == 0)
	return (NULL);

	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
	return (NULL);

	i = 0;
	while (*str && i < word_count)
	{
		while (*str == ' ')
		str++;

		len = 0;
		while (str[len] && str[len] != ' ')
		len++;

		words[i] = malloc((len + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			for (k = 0; k < i; k++)
			free(words[k]);
			free(words);
			return (NULL);
		}
		for (j = 0; j < len; j++)
		words[i][j] = str[j];
		words[i][j] = '\0';
		str += len;
		i++;
	}
	words[i] = NULL;
	return (words);
}
