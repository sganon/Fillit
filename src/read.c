/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 20:56:53 by sganon            #+#    #+#             */
/*   Updated: 2015/12/04 15:26:50 by sganon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fillit.h"

char	*read_that_file(char *filename)
{
	int		fd;
	int		i;
	char	*buffer;
	char	*dest;
	char	*tmp;

	if((fd = open(filename, O_RDONLY)) == -1)
		return (NULL);
	dest = "";
	buffer = (char *)malloc(sizeof(char) * BUFFSIZE + 1);
	while ((i = read(fd, buffer, BUFFSIZE)) != 0)
	{
		buffer[i] = 0;
		tmp = ft_strdup(buffer);
		dest = ft_strjoin(dest, tmp);
	}
	return (dest);
}

char	**put_in_tab(char *str)
{
	char	**tab;

	tab = ft_strsplit(str, '\n');
	while (tab[i])
	{

	}
	return (tab);
}
