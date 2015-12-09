/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pattern1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybeaure <ybeaure@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 01:10:15 by ybeaure           #+#    #+#             */
/*   Updated: 2015/12/08 18:20:45 by sganon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	tetri0(t_pattern *pattern)
{
	pattern->firstx = 0;
	pattern->firsty = 0;
	pattern->x0 = 0;
	pattern->y0 = 0;
	pattern->x1 = 0;
	pattern->y1 = 1;
	pattern->x2 = 0;
	pattern->y2 = 2;
	pattern->x3 = 0;
	pattern->y3 = 3;
}

void	tetri1(t_pattern *pattern)
{
	pattern->firstx = 0;
	pattern->firsty = 0;
	pattern->x0 = 0;
	pattern->y0 = 0;
	pattern->x1 = 1;
	pattern->y1 = 0;
	pattern->x2 = 2;
	pattern->y2 = 0;
	pattern->x3 = 3;
	pattern->y3 = 0;
}

void	tetri2(t_pattern *pattern)
{
	pattern->firstx = 0;
	pattern->firsty = 0;
	pattern->x0 = 0;
	pattern->y0 = 0;
	pattern->x1 = 1;
	pattern->y1 = 0;
	pattern->x2 = 1;
	pattern->y2 = 1;
	pattern->x3 = 2;
	pattern->y3 = 1;
}

void	tetri3(t_pattern *pattern)
{
	pattern->firstx = 1;
	pattern->firsty = 0;
	pattern->x0 = 1;
	pattern->y0 = 0;
	pattern->x1 = 2;
	pattern->y1 = 0;
	pattern->x2 = 0;
	pattern->y2 = 1;
	pattern->x3 = 1;
	pattern->y3 = 1;
}

void	tetri4(t_pattern *pattern)
{
	pattern->firstx = 0;
	pattern->firsty = 0;
	pattern->x0 = 0;
	pattern->y0 = 0;
	pattern->x1 = 1;
	pattern->y1 = 0;
	pattern->x2 = 0;
	pattern->y2 = 1;
	pattern->x3 = 1;
	pattern->y3 = 1;
}
