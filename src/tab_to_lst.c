/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_to_lst.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 18:50:32 by sganon            #+#    #+#             */
/*   Updated: 2015/12/08 19:28:05 by sganon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**cut_tetri(char **tab)
{
	int i;
	char 
		x 
	i = 0;

}

void	tab_to_lst(char **tab)
{
	int		i;
	t_tetri	*ptr;
	int		j;

	i = 0;
	j = 0;
	ptr = NULL;
	while (tab[i] && ptr->next != NULL)
	{
		while (j < 4)
		{
			ptr->tab[i] = ft_strcpy(ptr->tab[i], tab[i]);
			i++;
			j++;
		}
		ptr = ptr->next;
	}
}
