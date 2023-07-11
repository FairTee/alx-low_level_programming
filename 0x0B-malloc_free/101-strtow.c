#include "main.h"
#include <stdlib.h>
/**
 * count_words - Counts the number words in a string
 * @str: The string to count words in
 * Return: Number of words in the strings
 */
int count_word(char *s)
{
	int flag, v, w;

	flag = 0, w = 0;

	for (v = 0; s[v] != '\0'; v++)
	{
		if (s[v] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}
	return (w);
}
/**
 * strtow - Splits a string into words
 * @str: The string to split
 * Return: NULL if error
 */
char **strtow(char *str)
{
	char **mat, *tmp;
	int i, k = 0, len = 0, words, v = 0, strt, nd;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	mat = (char **) malloc(sizeof(char *) * (words + 1));
	if (mat == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (v)
			{
				nd = i;
				tmp = (char *) malloc(sizeof(char) * (v + 1));
				if (tmp == NULL)
					return (NULL);
				while (strt < nd)
					*tmp++ = str[strt++];
				*tmp = '\0';
				mat[k] = tmp - v;
				k++;
				v = 0;
			}
		}
		else if (v++ == 0)
			strt = i;
	}
	mat[k] = NULL;
	return (mat);
}
