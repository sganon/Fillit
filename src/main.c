/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 20:45:55 by sganon            #+#    #+#             */
/*   Updated: 2015/12/07 15:00:54 by sganon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fillit.h"

int		main(int argc, char **argv)
{
	char	*str;
	char	**tab;
	int		i;

	i = 0;
	(void)argc;
	str = read_that_file(argv[1]);
	if (check_init(str))
	{
		tab = put_in_tab(str);
		ft_putendl(ft_itoa(check_for_contact(tab)));
		if (check_for_char(tab) && check_for_size(tab) && check_for_nbpiece(tab))
		{
			tab = convert_to_letter(tab);
			while (tab[i])
			{
				if (!(i % 4))
					ft_putstr("\n");
				ft_putendl(tab[i]);
				i++;
			}
		}
	}
	else
		ft_putstr("error");
	return (0);
}
