#include "ft_check_file.h"

int ft_check_file(int fd)
{
  char c, *line;
	int ret, i = -1, ii = 0;
  int ln = 1, cn = 0, ct = 0, erreur = 0; 
	
	line = (char *)malloc(1);
	line[0] = '\0';
	while ((ret = read(fd, &c, 1)) > 0)
	{
    if (ln == 1 && c == '1') 
      cn++;
    if (c == '\n')
      ln++;
    else
      ct++;
    if (cn != ct && c == '\n')
      erreur++;
    if (ct == cn && c == '\n')
      ct = 0;
    if (c != '\n')
      line = ft_strjoin(line, c);
  }
	while(line[++i]);
  ii = i;
	if (i == 0 || ret == -1)
	{
		free(line);
		return NULL;
	}
  printf("%s\n",line);
  printf("nombre de carater : %d\n", i);
  printf("nombre de colonne : %d\n", cn);
  printf("nombre de ct      : %d\n", ct);
  ii = i / cn;
  printf("nombre de ligne   : %d\n", ii);
  printf("mombre erreur     : %d\n", erreur);
  
	return (0);	
}