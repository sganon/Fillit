/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_to_lst.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 18:50:32 by sganon            #+#    #+#             */
/*   Updated: 2015/12/09 17:09:15 by sganon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**cut_tetri(char **tab, int i)
{
	char	**tetri_tab;
	int		counter;

	counter = 0;
	tetri_tab = (char **)malloc(sizeof(char *) * 4);
	while (counter < 4 && tab[i])
	{
		tetri_tab[counter] = (char *)malloc(sizeof(char) * 4);
		tetri_tab[counter] = tab[i];
		tetri_tab[counter][4] = '\0';
		i++;
		counter++;
	}
	tetri_tab[4] = NULL;
	return (tetri_tab);
}

void	tab_to_lst(char **tab, t_tetri *ptr)
{
	int i;

	i = 0;
	if (ptr == NULL)
		ptr = (t_tetri *)malloc(sizeof(t_tetri));
	while (ptr && tab[i])
	{
		ptr->tab = cut_tetri(tab, i);
		i = i + 4;
		ptr->next = (t_tetri *)malloc(sizeof(t_tetri));
		ptr = ptr->next;
	}
	ptr->next = NULL;
}
