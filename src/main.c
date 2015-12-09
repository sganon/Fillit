/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 20:45:55 by sganon            #+#    #+#             */
/*   Updated: 2015/12/09 18:39:15 by sganon           ###   ########.fr       */
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
	i = 0;
	(void)argc;
	ptr = (t_tetri *)malloc(sizeof(t_tetri));
	str = read_that_file(argv[1]);
	if (check_init(str) && check_for_char(str))
	{
		tab = ft_strsplit(str, '\n');
		if (check_for_size(tab))
		{
			tab_to_lst(tab, ptr);
			while (ptr->next != NULL)
			{
				ft_putnbr(ptr->id);
				ft_putstr("\n");
				while (j < 4)
				{
					ft_putendl(ptr->tab[j]);
					j++;
				}
				j = 0;
				ptr = ptr->next;
			}
		}
	}
	else
		ft_putstr("error");
	return (0);
}
