#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: parametr filename
 * @text_content: parametr text_content
 * Description: The function appends text at the end of a file
 * Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
		len = write(fd, text_content, strlen(text_content));

	close(fd);

	if (len == -1)
		return (-1);

	return (1);
}
