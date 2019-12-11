/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pganglof <pganglof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 16:46:27 by pganglof          #+#    #+#             */
/*   Updated: 2019/12/11 15:42:34 by pganglof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void			fill_str(t_map *map)
{
	int		x;

	x = 0;
	draw_sky_ground(map);
	while (x < RES_X)
	{
		map->gamer->camerax = 2 * x / (double)RES_X - 1.0;
		map->gamer->raydirx = map->gamer->dirx + map->gamer->planex
								* map->gamer->camerax;
		map->gamer->raydiry = map->gamer->diry + map->gamer->planey
								* map->gamer->camerax;
		define_wall(map);
		draw_wall(map, &x);
		x++;
		map->gamer->stepx = 0;
		map->gamer->stepy = 0;
	}
}
