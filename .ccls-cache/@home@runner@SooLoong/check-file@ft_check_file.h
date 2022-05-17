#ifndef FT_CHECK_FILE_H
#define FT_CHECK_FILE_H

#ifndef NULL
#define NULL (0)
#endif

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

int ft_check_file(int fd);
char *ft_strjoin(char *s, char c);

#endif
