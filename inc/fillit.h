/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 20:30:41 by sganon            #+#    #+#             */
/*   Updated: 2015/12/09 18:37:30 by sganon           ###   ########.fr       */
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

typedef struct		s_pattern
{
	int				firstx;
	int				firsty;
	int				x0;
	int				y0;
	int				x1;
	int				y1;
	int				x2;
	int				y2;
	int				x3;
	int				y3;
}					t_pattern;

typedef struct		s_tetri
{
	int				id;
	int				tetri;
	char			**tab;
	int				firstx;
	int				firsty;
	int				x0;
	int				y0;
	int				x1;
	int				y1;
	int				x2;
	int				y2;
	int				x3;
	int				y3;
	struct s_tetri	*next;
}					t_tetri;

char				*ft_strcpy(char *dst, const char *src);
void				tab_to_lst(char **tab, t_tetri *ptr);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_itoa(int n);
int					check_for_contact(char **tab);
int					check_for_nbpiece(char **tab);
int					check_init(char *str);
int					check_for_size(char **tab);
void				ft_putnbr(int n);
int					check_for_char(char *str);
char				**convert_to_letter(char **tab);
void				ft_putstr(char const *s);
char				**ft_strsplit(char const *s, char c);
int					ft_isprint(int c);
size_t				ft_strlen(const char *s);
char				*ft_strcat(char *s1, const char *s2);
char				*read_that_file(char *filename);
char				*ft_strdup(const char *s1);
char				*ft_strjoin(char const *s1, char const *s2);
void				ft_putendl(char const *s);
#endif
