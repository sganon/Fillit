/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 20:45:55 by sganon            #+#    #+#             */
/*   Updated: 2015/12/13 19:03:05 by sganon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

void	ft_putlsttab(t_tetri *ptr)
{
	int i;

	i = 0;
	while (ptr->next != NULL)
	{
		while (i < 4)
		{
			ft_putendl(ptr->tab[i]);
			i++;
		}
		ft_putchar('\n');
		i = 0;
		ptr = ptr->next;
	}
}

void	ft_put_pattern_tab(t_pattern *ptr)
{
	int	i;
	int j;

	i = 0;
	while (i < 19)
	{
		j = 0;
		while (j < 10)
		{
			ft_putnbr(ptr->pattern_tab[i][j]);
			ft_putstr("\n");
			j++;
		}
		ft_putstr("\n");
		i++;
	}
}

int		main(int argc, char **argv)
{
	char		*str;
	char		**tab;
	t_tetri		*ptr;
	t_pattern	*ptr2;

	(void)argc;
	ptr = (t_tetri *)malloc(sizeof(t_tetri));
	ptr2 = (t_pattern *)malloc(sizeof(t_pattern));
	str = read_that_file(argv[1]);
	if (check_init(str) && check_for_char(str))
	{
		tab = ft_strsplit(str, '\n');
		if (check_for_size(tab))
		{
			tab_to_lst(tab, ptr);
			ptr->tab = move_tetri(ptr->tab);
			ft_putlsttab(ptr);
			init_pattern(ptr2);
			//ft_put_pattern_tab(ptr2);
			

		}
	}
	else
		ft_putstr("error\n");
	return (0);
}
