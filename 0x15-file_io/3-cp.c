#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "main.h"

#define BUFFER_SIZE 1024

static int open_source_file(const char *file_from);
static int open_destination_file(const char *file_to);
static int read_and_write_data(int fd_from, int fd_to);

/**
 * copy_file - copies content
 * @file_from: name of file source
 * @file_to: name of file dest
 * Return: 0
 */

int copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to, result;

	if (file_from == NULL || file_to == NULL)
	{
	dprintf(2, "Usage: cp file_from file_to\n");
	return (97);
	}

	fd_from = open_source_file(file_from);
	if (fd_from == -1)
	return (98);

	fd_to = open_destination_file(file_to);
	if (fd_to == -1)
	{
		close(fd_from);
		return (99);
	}

	result = read_and_write_data(fd_from, fd_to);

	close(fd_from);
	close(fd_to);

	return (result);
}

/**
 * open_source_file - Opens source file
 * @file_from: name of source fle
 * Return: 0
 */
static int open_source_file(const char *file_from)
{
	int fd_from = open(file_from, O_RDONLY);

	if (fd_from == -1)
	dprintf(2, "Error: Can't read from file %s\n", file_from);

	return (fd_from);
}

/**
 * open_destination_file - name of dest file
 * @file_to: dest file
 * Return: 0
 */
static int open_destination_file(const char *file_to)
{
	mode_t file_permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH;

	int fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, file_permissions);

	if (fd_to == -1)
	dprintf(2, "Error: Can't write to file %s\n", file_to);

	return (fd_to);
}

/**
 * read_and_write_data - reads and writes date
 * @fd_from: fd source
 * @fd_to: fd dest
 * Return: 0
 */
static int read_and_write_data(int fd_from, int fd_to)
{
	char buffer[BUFFER_SIZE];
	int read_result, write_result;

	while ((read_result = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
	write_result = write(fd_to, buffer, read_result);
	if (write_result == -1)
	{
		dprintf(2, "Error: Can't write to destination file\n");
		return (99);
	}
	}

	if (read_result == -1)
	{
	dprintf(2, "Error: Can't read from source file\n");
	return (98);
	}

	return (0);
}

/**
 * main - Entry
 * @argc: Argument
 * @argv: argument
 * Return: 0
 */
int main(int argc, char **argv)
{
	int result;

	if (argc != 3)
	{
	dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
	return (97);
	}

	result = copy_file(argv[1], argv[2]);
	return (result);
}
