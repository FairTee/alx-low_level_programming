#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file
 * @filename: NAme of the file to append to
 * @text_content: NULL terminated string to append the file
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_des, write_res;
	size_t text_len = 0;

	if (filename == NULL)
		return (-1);

	file_des = open(filename, O_WRONLY | O_APPEND);
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
