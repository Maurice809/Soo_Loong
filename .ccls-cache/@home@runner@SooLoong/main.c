#include "so_long.h"

static int ft_error(void)
{
	ft_printf("Error\nUse : ./so_long ./example_map.ber\n");
	return (0);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
		return (ft_error());
	if (ft_check(argv[1]))
	{
    
		ft_printf("game\n");
	}
	else
		ft_printf("Error\n");
	return(1);
}