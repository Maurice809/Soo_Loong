/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 23:37:44 by Maurice809        #+#    #+#             */
/*   Updated: 2022/05/31 22:37:57 by Maurice809       ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_check_file.h"

void	ft_check_file(int fd, t_Game *info)
{
	char	c;
	char	*line;

	line = (char *)malloc(1);
	line[0] = '\0';
	while ((read(fd, &c, 1)) > 0)
	{
		if (info->ligne == 1 && c == '1')
			info->colone++;
		if (c == '\n')
			info->ligne++;
		else
			info->colone_temp++;
		if (info->colone != info->colone_temp && c == '\n')
			info->erreur++;
		if (info->colone_temp == info->colone && c == '\n')
			info->colone_temp = 0;
		if (c != '\n')
			line = ft_strjoin(line, c);
	}
	while (line[++info->carater])
		;
	info->map = ft_strjoin(line, info->map);
}
