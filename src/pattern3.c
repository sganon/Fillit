/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pattern3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybeaure <ybeaure@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 01:48:46 by ybeaure           #+#    #+#             */
/*   Updated: 2015/12/08 14:45:49 by sganon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "fillit.h"

void	tetri10(t_pattern *pattern)
{
	pattern->firstx = 0;
	pattern->firsty = 0;
	pattern->x0 = 0; 
	pattern->y0 = 0;
	pattern->x1 = 1;
	pattern->y1 = 0;
	pattern->x2 = 2;
	pattern->y2 = 0;
	pattern->x3 = 0;
	pattern->y3 = 1;
}

void	tetri11(t_pattern *pattern)
{
	pattern->firstx = 0;
	pattern->firsty = 0;
	pattern->x0 = 0;
	pattern->y0 = 0;
	pattern->x1 = 0;
	pattern->y1 = 1;
	pattern->x2 = 0;
	pattern->y2 = 2;
	pattern->x3 = 1;
	pattern->y3 = 2;
}

void	tetri12(t_pattern *pattern)
{
	pattern->firstx = 1;
	pattern->firsty = 0;
	pattern->x0 = 1;
	pattern->y0 = 0;
	pattern->x1 = 1;
	pattern->y1 = 1;
	pattern->x2 = 0;
	pattern->y2 = 2;
	pattern->x3 = 1;
	pattern->y3 = 2;
}

void	tetri13(t_pattern *pattern)
{
	pattern->firstx = 0;
	pattern->firsty = 0;
	pattern->x0 = 0;
	pattern->y0 = 0;
	pattern->x1 = 1;
	pattern->y1 = 0;
	pattern->x2 = 1;
	pattern->y2 = 1;
	pattern->x3 = 1;
	pattern->y3 = 2;
}

void	tetri14(t_pattern *pattern)
{
	pattern->firstx = 0;
	pattern->firsty = 0;
	pattern->x0 = 0;
	pattern->y0 = 0;
	pattern->x1 = 1;
	pattern->y1 = 0;
	pattern->x2 = 0;
	pattern->y2 = 1;
	pattern->x3 = 0;
	pattern->y3 = 2;
}
