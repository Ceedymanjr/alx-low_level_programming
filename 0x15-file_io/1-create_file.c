#include "main.h"
/**
 * create_file - function that a file
 * @filename: file pointer
 * @text_content: string pointer
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, length);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);

}
