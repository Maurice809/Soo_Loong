/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 19:34:31 by tmoret            #+#    #+#             */
/*   Updated: 2022/05/28 19:40:45 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_check_file.h"

char	*ft_strjoin(char *s, char c)
{
	char	*str;
	int		i;

	i = -1;
	while (s[++i])
		;
	str = (char *)malloc(i + 2);
	if (!str)
		return (NULL);
	i = -1;
	while (s[++i])
		str[i] = s[i];
	str[i] = c;
	str[i + 1] = '\0';
	free(s);
	return (str);
}
