#include "ft_check_file.h"

int main(int argv, char *argc[])
{
  int fd;

  fd = open(argc[1], O_RDONLY);
  if (fd == -1)
	{
		write(1, "FILE Error\n", 13);
		return (1);
	}
  ft_check_file(fd);
  printf("ok");
  return (0);
  }