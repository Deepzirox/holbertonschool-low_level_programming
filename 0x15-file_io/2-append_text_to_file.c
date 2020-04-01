#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
/**
 * append_text_to_file - append to file
 * @filename: name of file
 * @text_content: file content
 * Return: 1 of works 0 if fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	mode_t m = O_WRONLY | O_APPEND;
	ssize_t w_write;

	if (!filename)
		return (-1);

	fd = open(filename, m);
	if (!fd)
		return (-1);
	if (text_content)
	{
		w_write = write(fd, text_content, strlen(text_content));
		if (w_write == -1)
		{
			return (-1);
		}
		close(fd);
	}
	else
	{
		close(fd);
		return (1);
	}
	close(fd);
	return (1);
}
