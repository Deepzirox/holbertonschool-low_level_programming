#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
/**
 * create_file - create new file
 * @filename: name of file
 * @text_content: file content
 * Return: 1 of works 0 if fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t n;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		n = write(fd, text_content, strlen(text_content));
		if (n == -1)
		{
			write(STDOUT_FILENO, "Fails", 6);
			return (-1);
		}
		close(fd);
	}
	close(fd);
	return (1);

}
