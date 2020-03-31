#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
  int fd;
  ssize_t total = 0, validate = 0, x = letters;
  char *buffer = malloc(sizeof(char *) * letters);

  if (!buffer || !filename)
  {
    free(buffer);
    return (0);
  }
  fd = open(filename, O_RDONLY);
  if(fd == -1)
  {
    free(buffer);
    return (0);
  }
  total = read(fd, buffer, letters);
  validate = write(STDOUT_FILENO, buffer, total);
  if (validate != total)
  {
    free(buffer);
    return (0);
  }
  free(buffer);
  return (total);
}