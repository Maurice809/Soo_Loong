#ifndef SO_LONG_H
#define SO_LONG_H

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

int	ft_check(char *s);
int ft_strcmp(char *s1, char *s2);
char	*ft_strrchr(const char *s, int c);
size_t	ft_strlen(const char *str);

#endif