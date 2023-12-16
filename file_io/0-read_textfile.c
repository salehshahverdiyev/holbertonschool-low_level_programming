#include "main.h"
/**
 * read_textfile -  reads a text file and prints it
 * @filename: parametr filename
 * @letters: parametr letters
 * Description: Function reads text file and prints to POSIX standard output
 * Return: the actual number of letters or 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t w, o, r;

	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}
