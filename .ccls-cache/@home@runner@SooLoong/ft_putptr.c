/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 19:43:34 by Maurice809        #+#    #+#             */
/*   Updated: 2022/04/17 14:25:19 by Maurice809       ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr(unsigned long nbr, int *count)
{
	if (nbr >= 16)
	{
		ft_putptr(nbr / 16, count);
		ft_putptr(nbr % 16, count);
	}
	else
	{
		if (nbr < 10)
			nbr += 48;
		else
			nbr += 87;
		ft_putchar(nbr, count);
	}
}
