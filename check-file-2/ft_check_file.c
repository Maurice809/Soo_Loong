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

  i = -1;
  int v = 0;
  int b = 1;
  int player = 0;
  int diams = 0;
  int exit = 0;
  int cratc = 0;
  
  while(line[++i])
  {
    write(1,&line[i],1);
    if (line[i] == '0')
      cratc++;
    if (line[i] == '1')
      cratc++;
    if (line[i] == 'P')
    {
      player++;
      cratc++;
    }
    if (line[i] == 'C')
    {
      diams++;
      cratc++;
    }
    if (line[i] == 'E')
    {
      exit++;
      cratc++;
    }
    if (v == 0 && line[i] != '1')
    {
      erreur++;
      write(1,"|",1);
    }
    ++v;
    if (v == cn && line[i] != '1') 
    {
      erreur++;
      write(1,"|",1);
    }
    
    if (v == cn)
    {
      v = 0;
      ++b;
      write(1,"\n",1);
    }
    if (b == ii && line[i] != '1')
      erreur++;
  }
  if (player > 1)
    erreur++;
  if (i != cratc)
    erreur++;
  printf("nombre de carater : %d\n", i);
  printf("nombre de ctrl    : %d\n", cratc);
  printf("nombre de player  : %d\n", player);
  printf("nombre de diamond : %d\n", diams);
  printf("nombre de sortie  : %d\n", exit);
  printf("mombre erreur     : %d\n", erreur);
	return (erreur);	
}