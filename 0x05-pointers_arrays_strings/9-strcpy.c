#include "main.h"

/**
 * *_strcpy- copies the string pointed to by src
 * @dest: character 1
 * @src: character 2
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';

	return (dest);
}
