/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 19:42:47 by tmoret            #+#    #+#             */
/*   Updated: 2022/05/28 19:55:50 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_check_file.h"

int	main(void)
{
	struct Person	*me;

	me = malloc(sizeof(t_Person));
	me->firstname = "toto";
	me->lastname = "tata";
	me->age = 50;
	ft_print(me);
	printf("Name: %s\nLast Name: %s\nAge: %d\n",
		me->firstname, me->lastname, me->age);
	printf("ok\n\n");
	return (0);
}
