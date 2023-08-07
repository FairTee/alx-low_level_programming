#include "main.h"

/**
 * append_text_to_file - Adds text to the end of a line
 * @filename: A ptr to the name of a file
 * @text_content: String to add to the end
 * Return: -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int q, e, lit = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lit = 0; text_content[lit];)
			lit++;
	}

	q = open(filename, O_WRONLY | O_APPEND);
	e = write(q, text_content, lit);

	if (q == -1 || e == -1)
		return (-1);

	close(q);

	return (1);
}
