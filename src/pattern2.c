/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pattern2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybeaure <ybeaure@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 01:37:51 by ybeaure           #+#    #+#             */
/*   Updated: 2015/12/08 14:50:21 by sganon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	tetri5(t_pattern *pattern)
{
	pattern->firstx = 0;
	pattern->firsty = 0;
	pattern->x0 = 0;
	pattern->y0 = 0;
	pattern->x1 = 0;
	pattern->y1 = 1;
	pattern->x2 = 1;
	pattern->y2 = 1;
	pattern->x3 = 1;
	pattern->y3 = 2;
}

void	tetri6(t_pattern *pattern)
{
	pattern->firstx = 1;
	pattern->firsty = 0;
	pattern->x0 = 1;
	pattern->y0 = 0;
	pattern->x1 = 0;
	pattern->y1 = 1;
	pattern->x2 = 1;
	pattern->y2 = 1;
	pattern->x3 = 0;
	pattern->y3 = 2;
}

void	tetri7(t_pattern *pattern)
{
	pattern->firstx = 0;
	pattern->firsty = 0;
	pattern->x0 = 0;
	pattern->y0 = 0;
	pattern->x1 = 1;
	pattern->y1 = 0;
	pattern->x2 = 2;
	pattern->y2 = 0;
	pattern->x3 = 2;
	pattern->y3 = 1;
}

void	tetri8(t_pattern *pattern)
{
	pattern->firstx = 2;
	pattern->firsty = 0;
	pattern->x0 = 2;
	pattern->y0 = 0;
	pattern->x1 = 0;
	pattern->y1 = 1;
	pattern->x2 = 1;
	pattern->y2 = 1;
	pattern->x3 = 2;
	pattern->y3 = 1;
}

void	tetri9(t_pattern *pattern)
{
	pattern->firstx = 0;
	pattern->firsty = 0;
	pattern->x0 = 0;
	pattern->y0 = 0;
	pattern->x1 = 0;
	pattern->y1 = 1;
	pattern->x2 = 1;
	pattern->y2 = 1;
	pattern->x3 = 2;
	pattern->y3 = 1;
}
