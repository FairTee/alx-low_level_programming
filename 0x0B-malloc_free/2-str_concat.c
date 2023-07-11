#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input
 * @s1: input
 * @s2: input
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;

	int len1 = 0, len2 = 0, x, y;

	if (s1 == NULL || *s1 == '\0')

		s1 = "";

	if (s2 == NULL || *s2 == '\0')

		s2 = "";

	while (s1[len1] != '\0')

		len1++;

	while (s2[len2] != '\0')

		len2++;
	concat = malloc(sizeof(char) * (len1 + len2 + 1));

	if (concat == NULL)

		return (NULL);

	for (x = 0; x < len1; x++)
		concat[x] = s1[x];

	for (y = 0; y < len2; y++)
		concat[x + y] = s2[y];

	concat[x + y] = '\0';

	return (concat);
}
