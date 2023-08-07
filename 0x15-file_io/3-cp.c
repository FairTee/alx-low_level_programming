#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fil);

/**
 * create_buffer - allocates 1024 bytes
 * @file: The name of file
 * Return: A ptr
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}
/**
 * close_file - closes files
 * @fil: file description
 */
void close_file(int fil)
{
	int x;

	x = close(fil);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fil %d\n", fil);
		exit(100);
	}
}

/**
 * main - copies the contents
 * @argc: Number of arguments
 * @argv: array of ptrs
 * Return: 0
 * Description: exit code 97,98,99,100
 */
int main(int argc, char *argv[])
{
	int f, t, r, w;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buffer(argv[2]);
	f = open(argv[1], O_RDONLY);
	r = read(f, buff, 1024);
	t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (f == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		w = write(t, buff, r);
		if (t == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		r = read(f, buff, 1024);
		t = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buff);
	close_file(f);
	close_file(t);

	return (0);
}
