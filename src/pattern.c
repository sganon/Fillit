/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pattern1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybeaure <ybeaure@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 01:10:15 by ybeaure           #+#    #+#             */
/*   Updated: 2015/12/14 16:41:45 by sganon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	patternpart1(t_pattern *ptr)
{
	char				*tab0[4];
	char				*tab1[4];
	char				*tab2[4];
	char				*tab3[4];

	tab0[0] = "#...";
	tab0[1] = "#...";
	tab0[2] = "#...";
	tab0[3] = "#...";
	tab1[0] = "####";
	tab1[1] = "....";
	tab1[2] = "....";
	tab1[3] = "....";
	tab2[0] = "##..";
	tab2[1] = ".##.";
	tab2[2] = "....";
	tab2[3] = "....";
	tab3[0] = ".##.";
	tab3[1] = "##..";
	tab3[2] = "....";
	tab3[3] = "....";
	ptr->pattern_tab[0] = tab0;
	ptr->pattern_tab[1] = tab1;
	ptr->pattern_tab[2] = tab2;
	ptr->pattern_tab[3] = tab3;
}

void	patternpart2(t_pattern *ptr)
{
	char				*tab4[4];
	char				*tab5[4];
	char				*tab6[4];
	char				*tab7[4];

	tab4[0] = "##..";
	tab4[1] = "##..";
	tab4[2] = "....";
	tab4[3] = "....";
	tab5[0] = "#...";
	tab5[1] = "##..";
	tab5[2] = ".#..";
	tab5[3] = "....";
	tab6[0] = ".#..";
	tab6[1] = "##..";
	tab6[2] = "#...";
	tab6[3] = "....";
	tab7[0] = "###.";
	tab7[1] = ".#..";
	tab7[2] = "....";
	tab7[3] = "....";
	ptr->pattern_tab[4] = tab4;
	ptr->pattern_tab[5] = tab5;
	ptr->pattern_tab[6] = tab6;
	ptr->pattern_tab[7] = tab7;
}

void	patternpart3(t_pattern *ptr)
{
	char				*tab8[4];
	char				*tab9[4];
	char				*tab10[4];
	char				*tab11[4];

	tab8[0] = ".#..";
	tab8[1] = "###.";
	tab8[2] = "....";
	tab8[3] = "....";
	tab9[0] = "#...";
	tab9[1] = "###.";
	tab9[2] = "....";
	tab9[3] = "....";
	tab10[0] = "###.";
	tab10[1] = "#...";
	tab10[2] = "....";
	tab10[3] = "....";
	tab11[0] = "#...";
	tab11[1] = "#...";
	tab11[2] = "##..";
	tab11[3] = "....";
	ptr->pattern_tab[8] = tab8;
	ptr->pattern_tab[9] = tab9;
	ptr->pattern_tab[10] = tab10;
	ptr->pattern_tab[11] = tab11;
}

void	patternpart4(t_pattern *ptr)
{
	char				*tab12[4];
	char				*tab13[4];
	char				*tab14[4];
	char				*tab15[4];

	tab12[0] = ".#..";
	tab12[1] = ".#..";
	tab12[2] = "##..";
	tab12[3] = "....";
	tab13[0] = "##..";
	tab13[1] = ".#..";
	tab13[2] = ".#..";
	tab13[3] = "....";
	tab14[0] = "##..";
	tab14[1] = "#...";
	tab14[2] = "#...";
	tab14[3] = "....";
	tab15[0] = "###.";
	tab15[1] = "..#.";
	tab15[2] = "....";
	tab15[3] = "....";
	ptr->pattern_tab[12] = tab12;
	ptr->pattern_tab[13] = tab13;
	ptr->pattern_tab[14] = tab14;
	ptr->pattern_tab[15] = tab15;
}

void	patternpart5(t_pattern *ptr)
{
	char				*tab16[4];
	char				*tab17[4];
	char				*tab18[4];

	tab16[0] = "..#.";
	tab16[1] = "###.";
	tab16[2] = "....";
	tab16[3] = "....";
	tab17[0] = "#...";
	tab17[1] = "##..";
	tab17[2] = "#...";
	tab17[3] = "....";
	tab18[0] = ".#..";
	tab18[1] = "##..";
	tab18[2] = ".#..";
	tab18[3] = "....";
	ptr->pattern_tab[16] = tab16;
	ptr->pattern_tab[17] = tab17;
	ptr->pattern_tab[18] = tab18;
}
