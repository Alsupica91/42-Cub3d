/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_pos.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pganglof <pganglof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 12:54:32 by pganglof          #+#    #+#             */
/*   Updated: 2019/12/05 18:22:39 by pganglof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void		init_pos(t_map *map, int orientation, int x, int y)
{
	map->gamer->posx = x;
	map->gamer->posy = y;
	if (orientation == 'N')
		map->gamer->degree = 90.01;
	if (orientation == 'E')
		map->gamer->degree = 0.01;
	if (orientation == 'W')
		map->gamer->degree = 180.01;
	if (orientation == 'S')
		map->gamer->degree = 270.01;
	//map->gamer->degree = 60.01 - 30.0;
	if (map->gamer->degree >= 0 && map->gamer->degree < 180)
		map->gamer->facing_up = 1;
	else
		map->gamer->facing_up = 0;
	if (map->gamer->degree >= 180 && map->gamer->degree < 360)
		map->gamer->facing_down = 1;
	else
		map->gamer->facing_down = 0;
	if (map->gamer->degree <= 90 || map->gamer->degree > 270)
		map->gamer->facing_right = 1;
	else
		map->gamer->facing_right = 0;
	if (map->gamer->degree > 90 && map->gamer->degree <= 270)
		map->gamer->facing_left = 1;
	else
		map->gamer->facing_left = 0;
	map->gamer->unitx = (map->gamer->posx * BLOCK_SIZE) + (BLOCK_SIZE / 2);
	map->gamer->unity = (map->gamer->posy * BLOCK_SIZE) + (BLOCK_SIZE / 2);
}
