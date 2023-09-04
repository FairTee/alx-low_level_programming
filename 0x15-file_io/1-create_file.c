#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
 * create_file - Creates a file with the specified
 * @filename: The name of the file to create
 * @text_content: NULL terminated string
 * Return: 1
 */

int create_file(const char *filename, char *text_content)
{
	int file_des, write_res;
	size_t text_len = 0;

	if (filename == NULL)
		return (-1);

	file_des = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file_des == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_len])
			text_len++;

		write_res = write(file_des, text_content, text_len);
		if (write_res == -1)
		{
			close(file_des);
			return (-1);
		}
	}
	close(file_des);
	return (1);
}
