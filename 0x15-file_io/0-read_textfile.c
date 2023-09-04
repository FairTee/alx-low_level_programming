#include <unistd.h>
#include <fcntl.h>
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to standard output
 * @filename: Name of file to read
 * @letters: Number of letters to read and print
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_des;
	ssize_t bytes_read, bytes_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	file_des = open(filename, O_RDONLY);
	if (file_des == -1)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(file_des);
		return (0);
	}

	bytes_read  = read(file_des, buffer, letters);
	if (bytes_read == -1)
	{
		close(file_des);
		free(buffer);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	close(file_des);
	free(buffer);

	if (bytes_written == bytes_read)
		return (bytes_written);

	return (0);
}
