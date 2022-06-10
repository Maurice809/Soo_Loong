/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newgame.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 22:23:01 by Maurice809        #+#    #+#             */
/*   Updated: 2022/06/10 20:02:30 by Maurice809       ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_check_file.h"

void	ft_newgame(t_Game *info)
{
	info->map = (char *)malloc(1);
	info->map = '\0';
	info->i = -1;
	info->carater = -1;
	info->colone = 0;
	info->colone_temp = 0;
	info->ligne = 1;
	info->ligne_temp = 2;
	info->player = 0;
	info->diams = 0;
	info->exit = 0;
	info->erreur = 0;
}
