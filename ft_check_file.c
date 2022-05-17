#include "so_long.h"

int ft_check_file(int fd)
{
  char c, *line;
	int ret, i = -1;
	
	line = (char *)malloc(1);
	line[0] = '\0';
	while ((ret = read(fd, &c, 1)) > 0)
	{
		line = ft_strjoin(line, c);
	//	if (c == '\n')
	//		break;
	}
	while(line[++i]);
	if (i == 0 || ret == -1)
	{
		free(line);
		return NULL;
	}
  ft
	return (0);	
}