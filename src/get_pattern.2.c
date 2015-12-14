/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_pattern.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 17:38:19 by sganon            #+#    #+#             */
/*   Updated: 2015/12/14 15:46:13 by sganon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	init_pattern_2(t_tetri *ptr, int j)
{
	ptr->pattern[0] = j;
	ptr->pattern[1] = 0;
	ptr->pattern[2] = 0;
	ptr->pattern[3] = 0;
}

int		test_pattern(t_tetri *pt, t_pattern *p, int j, int i)
{
	int	y;
	int	x;
	int	xx;

	y = 0;
	x = 4;
	xx = 5;
	while (xx <= 9 && y <= 18)
	{
		while (pt->tab[p->pattern_tab[y][xx] + i][p->pattern_tab[y][x] + j] == '#')
		{
			ft_putendl("Ca matche:");
			x = x + 2;
			xx = xx + 2;
		}
		if (xx == 9)
		{
			ft_putendl("xx == 9");
			ft_putendl(ft_itoa(y));
			return (1);
		}
		else
		{
			ft_putendl("Ca matche plus :");
			x = 4;
			xx = 5;
			y++;
		}
	}
	return (0);
}

int		get_pattern(t_tetri *ptr, t_pattern *pattern)
{
	int	i;
	int	j;

	i = 0;
	while (ptr->tab[i])
	{
		j = 0;
		while (ptr->tab[i][j])
		{
			if (ptr->tab[i][j] == '#')
			{
				init_pattern_2(ptr, j);
				if (test_pattern(ptr, pattern, j, i))
				{
					return (1);
				}
				else
					return (0);
				ft_putendl("GG");
			}
			j++;
		}
		i++;
	}
	return (0);
}
