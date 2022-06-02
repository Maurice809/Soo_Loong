/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 19:20:54 by tmoret            #+#    #+#             */
/*   Updated: 2022/05/28 21:58:24 by Maurice809       ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_check_file.h"

void	ft_print(t_Person	*me)
{
	printf("Name: %s\nLast Name: %s\nAge: %d\n",
		me->firstname, me->lastname, me->age);
	me->firstname = "Thomas";
	me->age = 27;
}
