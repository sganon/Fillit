/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 20:45:55 by sganon            #+#    #+#             */
/*   Updated: 2015/12/04 15:21:05 by sganon           ###   ########.fr       */
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
	tab = put_in_tab(str);
	//ft_putendl(str);
	while (tab[i])
	{
		ft_putendl(tab[i]);
		i++;
	}
	return (0);
}
