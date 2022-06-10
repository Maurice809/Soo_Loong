#include "ft_check_file.h"

int main(int argv, char *argc[])
{
  int fd;
  struct Game	*info;

  info = malloc(sizeof(t_Game));
  fd = open(argc[1], O_RDONLY);
  if (fd == -1)
	{
		write(1, "FILE Error\n", 13);
		return (1);
	}
  ft_newgame(info);
  ft_check_file(fd, info);
  printf("ok\n");
  printf("Map               : %s\n", info->map);
  printf("nombre de carater : %d\n", info->carater);
  printf("nombre de colonne : %d\n", info->colone);
  printf("nombre de ct      : %d\n", info->colone_temp);
  info->ligne = info->carater / info->colone;
  printf("nombre de ligne   : %d\n", info->ligne);
  printf("mombre info->erreur     : %d\n", info->erreur);

ft_check_map(info);
  //  printf("nombre de carater : %d\n", i);
  printf("nombre de ctrl    : %d\n", info->carater);
  printf("nombre de info->player  : %d\n", info->player);
  printf("nombre de diamond : %d\n", info->diams);
  printf("nombre de sortie  : %d\n", info->exit);
  printf("mombre info->erreur     : %d\n", info->erreur);

  ft_check_line(info);
  printf("mombre info->erreur     : %d\n", info->erreur);
  free(info);
  return (0);
  }
