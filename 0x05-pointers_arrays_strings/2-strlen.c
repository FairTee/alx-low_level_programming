#include "main.h"

/**
 *_strlen - function that returns the length of a string
 *@s: character of the function
 *Return: len
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
