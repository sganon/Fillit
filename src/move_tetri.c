/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_tetri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 17:59:52 by sganon            #+#    #+#             */
/*   Updated: 2015/12/13 18:59:52 by sganon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		find_p(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '#')
			return (1);
		i++;
	}
	return (0);
}

char	**ft_resettab(char **tab)
{
	int i;
	int counter;
	int j;

	counter = 0;
	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			if (tab[i][j] == '#')
				counter++;
			if (counter == 4 && tab[i + 1] != NULL)
				tab[i + 1] = "....";
			j++;
		}
		i++;
	}
	return (tab);
}

char	**move_y(char **tab)
{
	int 	i;
	int 	k;

	k = 0;
	i = 0;
	while (tab[i])
	{
		if (find_p(tab[i]))
		{
			tab[k] = tab[i];
			k++;
		}
		i++;
	}
	tab = ft_resettab(tab);
	return (tab);
}

char	**move_x_2(char **tab, int m_value)
{
	int i;
	int j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			if (tab[i][j] == '#')
			{
				tab[i][j - m_value] = '#';
				tab[i][j] = '.';
			}
			j++;
		}
		i++;
	}
	return (tab);
}

char	**move_x(char **tab)
{
	int i;
	int j;
	int m_value;

	i = 0;
	m_value = 4;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			if (tab[i][j] == '#' && j <= m_value)
				m_value = j;
			j++;
		}
		i++;
	}
	tab = move_x_2(tab, m_value);
	return (tab);
}

char	**move_tetri(char **tab)
{
	int i;

	i = 0;
	if (!(ft_strcmp(tab[0], "#...")) && !(ft_strcmp(tab[1], "#...")) 
		&& !(ft_strcmp(tab[2], "#...")) && !(ft_strcmp(tab[3], "#...")))
		return (tab);
	tab = move_y(tab);
	tab = move_x(tab);
	return (tab);
}
