#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * read_textfile - read file content
 * @filename: name of file
 * @letters: bytes to read
 * Return: count of printed bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t total = 0, validate = 0;
	char *buffer = malloc(sizeof(char *) * letters);

	if (!filename)
	{
		free(buffer);
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	total = read(fd, buffer, letters);
	if (total == -1)
	{
		free(buffer);
		return (0);
	}
	validate = write(STDOUT_FILENO, buffer, total);
	if (validate == -1)
	{
		free(buffer);
		return (0);
	}
	if (validate != total)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	return (validate);
}
