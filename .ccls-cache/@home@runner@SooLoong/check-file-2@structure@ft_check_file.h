/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_file.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 19:25:43 by tmoret            #+#    #+#             */
/*   Updated: 2022/05/28 19:50:11 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CHECK_FILE_H
# define FT_CHECK_FILE_H

# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

typedef struct Person
{
	char	*firstname;
	char	*lastname;
	int		age;
}	t_Person;

void	ft_print(t_Person	*me);
char	*ft_strjoin(char *s, char c);

#endif
