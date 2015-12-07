/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 18:28:21 by sganon            #+#    #+#             */
/*   Updated: 2015/12/07 15:25:22 by sganon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fillit.h"

int		check_init(char *str)
{
	int	i;

	i = 20;
	while (str[i])
	{
		if (str[i] != '\n')
			return (0);
		i = i + i + 1;
	}
	return (1);
}

int		check_for_char(char **tab)
{
	int i;
	int j;

	i = 0;
	while(tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			if (tab[i][j] != '.' && tab[i][j] != '#')
				return (0);
			j++;
		}
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
	return (1);
}

int		check_for_nbpiece(char **tab)
{
	int				i;
	unsigned int	j;
	int				counter;

	counter = 0;
	i = 0;
	while (tab[i])
	{
		j = 0;
		while (j <= ft_strlen(tab[i]))
		{
			if ((i % 4) == 0 && i > 1 && j == 0)
			{
				if (counter != 4)
					return (0);
				counter = 0;
			}
			if (tab[i][j] == '#')
				counter++;
			j++;
		}
		i++;
	}
	return (1);
}

int		check_for_contact(char **tab)
{
	int				i;
	unsigned int	j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (j <= ft_strlen(tab[i]))
		{
			if (tab[i][j] == '#')
			{
				if ((tab[i + 1][j] && tab[i + 1][j] != '#') && (tab[i - 1][j] && tab[i - 1][j] != '#') && 
						(tab[i][j + 1] && tab[i][j + 1] != '#') && (tab[i][j - 1] && tab[i][j - 1] != '#'))
					return (0);

			}
			j++;
		}
		i++;
	}
	return (1);
}
