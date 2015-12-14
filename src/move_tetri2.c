/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_tetri2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 14:57:29 by sganon            #+#    #+#             */
/*   Updated: 2015/12/14 15:05:47 by sganon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	move_lst_tetri(t_tetri *ptr)
{
	while (ptr->next != NULL)
	{
		ptr->tab = move_tetri(ptr->tab);
		ptr = ptr->next;
	}
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
				tab[i][j] = '.';
				tab[i][j - m_value] = '#';
			}
			j++;
		}
		i++;
	}
	return (tab);
}
