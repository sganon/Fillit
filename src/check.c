/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 18:28:21 by sganon            #+#    #+#             */
/*   Updated: 2015/12/08 18:50:08 by sganon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		check_init(char *str)
{
	int	i;

	i = 20;
	while (str[i])
	{
		if (str[i] != '\n')
			return (0);
		i = i + 21;
	}
	return (1);
}

int		check_for_char(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if (str[i] != '.' && str[i] != '#' && str[i] != '\n')
			return (0);
		i++;
	}
	return (1);
}

int		check_for_size(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (ft_strlen(tab[i]) != 4)
			return (0);
		i++;
	}
	if (i % 4)
		return (0);
	else
		return (1);
}
