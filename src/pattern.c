/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pattern1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybeaure <ybeaure@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 01:10:15 by ybeaure           #+#    #+#             */
/*   Updated: 2015/12/12 21:13:56 by sganon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	patternpart1(t_pattern *ptr)
{
	static int			tab0[10] = {0, 0, 0, 0, 0, 1, 0, 2, 0, 3};
	static int			tab1[10] = {0, 0, 0, 0, 1, 0, 2, 0, 3, 0};
	static int			tab2[10] = {0, 0, 0, 0, 1, 0, 1, 1, 2, 1};
	static int			tab3[10] = {1, 0, 0, 0, 1, 0, -1, 1, 0, 1};

	ptr->pattern_tab[0] = tab0;
	ptr->pattern_tab[1] = tab1;
	ptr->pattern_tab[2] = tab2;
	ptr->pattern_tab[3] = tab3;
}

void	patternpart2(t_pattern *ptr)
{
	static int			tab4[10] = {0, 0, 0, 0, 1, 0, 0, 1, 1, 1};
	static int			tab5[10] = {0, 0, 0, 0, 0, 1, 1, 1, 1, 2};
	static int			tab6[10] = {1, 0, 0, 0, -1, 1, 0, 1, -1, 2};
	static int			tab7[10] = {0, 0, 0, 0, 1, 0, 2, 0, 1, 1};
	static int			tab18[10] = {1, 0, 0, 0, -1, 1, 0, 1, 0, 2};

	ptr->pattern_tab[4] = tab4;
	ptr->pattern_tab[5] = tab5;
	ptr->pattern_tab[6] = tab6;
	ptr->pattern_tab[7] = tab7;
	ptr->pattern_tab[18] = tab18;
}

void	patternpart3(t_pattern *ptr)
{
	static int			tab8[10] = {1, 0, 0, 0, -1, 1, 0, 1, 1, 1};
	static int			tab9[10] = {0, 0, 0, 0, 0, 1, 1, 1, 2, 1};
	static int			tab10[10] = {0, 0, 0, 0, 1, 0, 2, 0, 0, 1};
	static int			tab11[10] = {0, 0, 0, 0, 0, 1, 0, 2, 1, 2};
	static int			tab17[10] = {0, 0, 0, 0, 0, 1, 1, 1, 0, 2};

	ptr->pattern_tab[8] = tab8;
	ptr->pattern_tab[9] = tab9;
	ptr->pattern_tab[10] = tab10;
	ptr->pattern_tab[11] = tab11;
	ptr->pattern_tab[17] = tab17;
}

void	patternpart4(t_pattern *ptr)
{
	static int			tab12[10] = {1, 0, 0, 0, 0, 1, -1, 2, 0, 2};
	static int			tab13[10] = {0, 0, 0, 0, 1, 0, 1, 1, 1, 2};
	static int			tab14[10] = {0, 0, 0, 0, 1, 0, 0, 1, 0, 2};
	static int			tab15[10] = {0, 0, 0, 0, 1, 0, 2, 0, 2, 1};
	static int			tab16[10] = {2, 0, 0, 0, -2, 1, -1, 1, 0, 1};
	
	ptr->pattern_tab[12] = tab12;
	ptr->pattern_tab[13] = tab13;
	ptr->pattern_tab[14] = tab14;
	ptr->pattern_tab[15] = tab15;
	ptr->pattern_tab[16] = tab16;
}

void	init_pattern(t_pattern *ptr)
{
	patternpart1(ptr);
	patternpart2(ptr);
	patternpart3(ptr);
	patternpart4(ptr);
}
