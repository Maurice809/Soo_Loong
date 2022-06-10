/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 16:26:52 by Maurice809        #+#    #+#             */
/*   Updated: 2022/06/10 19:53:27 by Maurice809       ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_check_file.h"

void	ft_check_line(t_Game *info)
{
	info->colone_temp = 1;
	info->i = info->ligne -1;
	while (info->map[++info->i])
	{
		if (info->map[info->i] != '1' && info->colone_temp == 1)
			info->erreur++;
		if (info->map[info->i] != '1' && info->colone_temp == info->ligne)
			info->erreur++;
		if (info->colone_temp == info->ligne)
		{
			info->colone_temp = 0;
			++info->ligne_temp;
		}
		if (info->map[info->i] != '1' && info->ligne_temp == info->ligne)
			info->erreur++;
		++info->colone_temp;
	}
}
