/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 20:45:55 by sganon            #+#    #+#             */
/*   Updated: 2015/12/14 17:02:28 by sganon           ###   ########.fr       */
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
	while (i <= 18)
	{
		j = 0;
		while (j < 4)
		{
			printf("%s",ptr->pattern_tab[i][j]);
			j++;
		}
		ft_putstr("\n");
		i++;
	}
}

void	init_pattern(t_pattern *ptr)
{
	int i;
	int j;

	i = 0;
	while (i <= 18)
	{
		ptr->pattern_tab[i] = (char **)malloc(sizeof(char *) * 4);
		j = 0;
		while (j <= 3)
		{
			ptr->pattern_tab[i][j] = (char *)malloc(sizeof(char) * 4);
			j++;
		}
		i++;
	}
	patternpart1(ptr);
	patternpart2(ptr);
	patternpart3(ptr);
	patternpart4(ptr);
	patternpart5(ptr);
}

int		main(int argc, char **argv)
{
	char		*str;
	char		**tab;
	t_tetri		*ptr;
	t_pattern	*ptr2;
	t_pattern	*ptr3;

	(void)argc;
	ptr = (t_tetri *)malloc(sizeof(t_tetri));
	ptr2 = (t_pattern *)malloc(sizeof(t_pattern));
	ptr3 = (t_pattern *)malloc(sizeof(t_pattern));
	str = read_that_file(argv[1]);
	if (check_init(str) && check_for_char(str))
	{
		tab = ft_strsplit(str, '\n');
		if (check_for_size(tab))
		{
			tab_to_lst(tab, ptr);
			move_lst_tetri(ptr);
			//ft_putlsttab(ptr);
			init_pattern(ptr2);
			ft_putendl("debug main");
			ft_put_pattern_tab(ptr3);
			ft_putendl("dEbug main");
		}
	}
	else
		ft_putstr("error\n");
	return (0);
}
