#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read text file print STDOUT
 * @filename: The text file
 * @letters: number of letters
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bxt;
	ssize_t fil;
	ssize_t real;
	ssize_t eet;

	fil = open(filename, O_RDONLY);
	if (fil == -1)
		return (0);
	bxt = malloc(sizeof(char) * letters);
	eet = read(fil, bxt, letters);
	real = write(STDOUT_FILENO, bxt, eet);

	free(bxt);
	close(fil);
	return (real);
}
