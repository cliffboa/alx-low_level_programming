#include "main.h"
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
	int count = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
		i++;
	}

	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words).
 *         NULL if str is NULL, str is empty, or if allocation fails.
 */
char **strtow(char *str)
{
	char **words;
	int word_count, word_len, i, j, k;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);

	words = malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
		return (NULL);

	i = 0;
	j = 0;
	while (str[i] != '\0' && j < word_count)
	{
		while (str[i] == ' ')
			i++;
		word_len = 0;
		while (str[i + word_len] != ' ' && str[i + word_len] != '\0')
			word_len++;

		words[j] = malloc(sizeof(char) * (word_len + 1));
		if (words[j] == NULL)
		{
			for (k = 0; k < j; k++)
				free(words[k]);
			free(words);
			return (NULL);
		}

		for (k = 0; k < word_len; k++)
			words[j][k] = str[i++];
		words[j][k] = '\0';
		j++;
	}

	words[j] = NULL;
	return (words);
}

