/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 20:56:53 by sganon            #+#    #+#             */
/*   Updated: 2015/12/08 18:46:16 by sganon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

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

char	**convert_to_letter(char **tab)
{
	int	i;
	int	j;
	int k;

	i = 0;
	while (tab[i])
	{
		j = 0;
		k = i / 4;
		while (tab[i][j])
		{
			if (tab[i][j] == '#')
				tab[i][j] = tab[i][j] + 30 + k;
			j++;
		}
		i++;
	}
	return (tab);
}
