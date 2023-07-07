#include "main.h"

/**
 * _isalpha - checks for alphabets
 * @c: character checked
 * Return: 0 if not
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
