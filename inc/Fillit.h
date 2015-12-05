/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 20:30:41 by sganon            #+#    #+#             */
/*   Updated: 2015/12/05 13:50:23 by sganon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# define BUFFSIZE	256
# include <string.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <fcntl.h>

int		check_for_nbpiece(char **tab);
int		check_init(char *str);
int		check_for_size(char **tab);
void	ft_putnbr(int n);
int		check_for_char(char **tab);
char	**convert_to_letter(char **tab);
void	ft_putstr(char const *s);
char	**put_in_tab(char *str);
char	**ft_strsplit(char const *s, char c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
char	*ft_strcat(char *s1, const char *s2);
char	*read_that_file(char *filename);
char	*ft_strdup(const char *s1);
char	*ft_strjoin(char const *s1, char const *s2);
void	ft_putendl(char const *s);
#endif
