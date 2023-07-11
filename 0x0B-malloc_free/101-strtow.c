#include "main.h"
#include <stdlib.h>
/**
 * count_words - Counts the number words in a string
 * @str: The string to count words in
 * Return: Number of words in the strings
 */
int count_words(char *str)
{
	int i, count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
	}
	return (count);
}
/**
 * strtow - Splits a string into words
 * @str: The string to split
 * Return: NULL if error
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, len, n;

	if (str == NULL || *str == '\0')
		return (NULL);
	while (*str == ' ')
		str++;
	if (*str == '\0')
	{
		words = malloc(sizeof(char *));
		if (words == NULL)
			return (NULL);
		words[0] = NULL;
		return (words);
	}
	n = count_words(str);
	words = malloc((n + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	for (i = 0, k = 0; i < n; i++)
	{
		len = 0;
		while (*(str + len) != ' ' && *(str + len) != '\0')
			len++;
		words[k] = malloc((len + 1) * sizeof(char));
		if (words[k] == NULL)
		{
			for (j = 0; j < i; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}
		for (j = 0; j < len; j++)
			words[k][j] = *(str++);
		words[k++][j] = '\0';
		while (*str == ' ')
			str++;
	}
	words[k] = NULL;
	return (words);
}
