#ifndef FT_CHECK_FILE_H
#define FT_CHECK_FILE_H

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

typedef struct Game
{
	char *map;
	int	carater;
	int	colone;
	int colone_temp;
	int ligne;
	int player;
	int diams;
	int exit;
	int erreur;
}	t_Game;

void	ft_newgame(t_Game *info);
void	 ft_check_file(int fd, t_Game *info);
void	ft_check_map(t_Game *info);
char *ft_strjoin(char *s, char c);

#endif
