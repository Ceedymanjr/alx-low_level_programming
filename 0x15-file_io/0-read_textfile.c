#include"main.h"
/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 * @filename: text file
 * @letters: letters to read
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *fp;
	ssize_t fd;
	ssize_t w;
	ssize_t x;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	fp = malloc(sizeof(char) * letters);
	x = read(fd, fp, letters);
	w = write(STDOUT_FILENO, fp, x);

	free(fp);
	close(fd);
	return (w);
}
