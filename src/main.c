/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 20:45:55 by sganon            #+#    #+#             */
/*   Updated: 2015/12/08 19:15:40 by sganon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	char	*str;
	int		i;
	char	**tab;
	t_tetri *ptr;
	int	j;

	j = 0;
	ptr = NULL;
	i = 0;
	(void)argc;
	str = read_that_file(argv[1]);
	if (check_init(str) && check_for_char(str))
	{
		ft_putendl("d1");
		tab = ft_strsplit(str, '\n');
		if (check_for_size(tab))
		{
			while (tab[i])
			{
				ft_putendl(tab[i]);
				i++;
			}
			ft_putendl("LOL CA SEGFAULT");
			tab_to_lst(tab);
			while (ptr->next != NULL)
			{
				while (ptr->tab[j])
				{
					ft_putendl(tab[j]);
					j++;
				}
				ptr = ptr->next;
			}
		}
		ft_putendl("d2");
	}
	else
		ft_putstr("error");
	return (0);
}
