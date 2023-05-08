#include "main.h"
/**
 * create_file - Creates a file with the specified content
 * @filename: The name of the file to create
 * @text_content: The content to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t written = 0, fd;
	size_t len;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
			;
		written = write(fd, text_content, len);
	}
	close(fd);
	if (written == -1)
		return (-1);
	return (1);
}
