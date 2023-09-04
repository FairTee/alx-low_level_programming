#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

void check_IO_stat(int stat, int fd, char *filename, char mode);
/**
 * main - copies the content of one file to another
 * @argc: argument count
 * @argv: arguments passed
 * Return: 1 on success, exit otherwise
 */
int main(int argc, char *argv[])
{
	int s, des, n_read = 1024, wrte, clse_src, clse_dest;
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}
	s = open(argv[1], O_RDONLY);
	check_IO_stat(s, -1, argv[1], 'O');
	des = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	check_IO_stat(des, -1, argv[2], 'W');
	while (n_read == 1024)
	{
		n_read = read(s, buffer, sizeof(buffer));
		if (n_read == -1)
			check_IO_stat(-1, -1, argv[1], 'O');
		wrte = write(des, buffer, n_read);
		if (wrte == -1)
			check_IO_stat(-1, -1, argv[2], 'W');
	}
	clse_src = close(s);
	check_IO_stat(clse_src, s, NULL, 'C');
	clse_dest = close(des);
	check_IO_stat(clse_dest, des, NULL, 'C');
	return (0);
}

/**
 * check_IO_stat - checks if a file can be opened or closed
 * @stat: file descriptor of the file to be opened
 * @filename: name of the file
 * @mode: closing or opening
 * @fd: file descripto
 * Return: void
 */
void check_IO_stat(int stat, int fd, char *filename, char mode)
{
	if (mode == 'C' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	else if (mode == 'O' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (mode == 'W' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}
