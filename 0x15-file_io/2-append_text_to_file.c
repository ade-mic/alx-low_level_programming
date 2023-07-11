#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: is the the name of a file
 * @text_content: Null terminated string to add to the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int clen;
	int file;
	ssize_t nb_write;

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	if (text_content)
	{
		clen = strlen(text_content);
		nb_write = write(file, text_content, clen);
		if (nb_write < 0)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
