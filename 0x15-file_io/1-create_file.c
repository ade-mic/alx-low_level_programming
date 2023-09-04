#include "main.h"
/**
 * create_file - creates a file
 * @filename: is the name of file to be created
 * @text_content: is a null terminated string to write to the file
 *
 * Return: 1 0n success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	size_t clen;
	ssize_t nb_write;

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		clen = strlen(text_content);
		nb_write = write(file, text_content, clen);
		if (nb_write == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
