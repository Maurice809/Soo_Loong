/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 19:20:54 by tmoret            #+#    #+#             */
/*   Updated: 2022/05/28 19:51:02 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_check_file.h"

void	ft_print(t_Person	*me)
{
	printf("Name: %s\nLast Name: %s\nAge: %d\n",
		me->firstname, me->lastname, me->age);
}
