#include "so_long.h"

int ft_error(int nbr, char *s1, char *s2)
{
	if (nbr == 0)
		printf("\n");
		printf("Error : no argument\n");
		printf("More information : so_long -help\n");
		s1 = 0;
		s2 = 0;
	return(0) ;
}