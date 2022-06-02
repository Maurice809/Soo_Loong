/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 22:59:04 by Maurice809        #+#    #+#             */
/*   Updated: 2022/05/31 23:08:14 by Maurice809       ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_check_file.h"

void	ft_check_map(t_Game *info)
{
  int i = -1;
  int v = 0;
  int b = 1;
  int player = 0;
  int diams = 0;
  int exit = 0;
  int cratc = 0;
  
  while(line[++i])
  {
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
}
