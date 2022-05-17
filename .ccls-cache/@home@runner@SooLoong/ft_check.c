#include "so_long.h"

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] == s2[i] && s1[i])
        i++;
    return (s1[i] - s2[i]);
}

int	ft_check(char *path)
{
	int		fd;
	char	*file;

	fd = open(path, O_RDONLY);
	if (fd < 0)
		return (0);
	file = ft_strrchr(path, '.');
	if (file == NULL || ft_strcmp(".ber", file) != 0)
  {
		ft_printf("%s",ft_check_file(fd));
    return (0);
  }
	return (1);
}