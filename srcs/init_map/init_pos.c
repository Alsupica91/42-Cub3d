/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_pos.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pganglof <pganglof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 12:54:32 by pganglof          #+#    #+#             */
/*   Updated: 2019/12/03 17:30:13 by pganglof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void		init_pos(t_map *map, int orientation, int x, int y)
{
	map->gamer->posx = x;
	map->gamer->posy = y;
	if (orientation == 'N')
		map->gamer->degree = 90.0;
	if (orientation == 'E')
		map->gamer->degree = 0.0;
	if (orientation == 'W')
		map->gamer->degree = 180.0;
	if (orientation == 'S')
		map->gamer->degree = 270.0;
//	map->gamer->degree = 135.0;
	if (map->gamer->degree >= 0 && map->gamer->degree < 180)
		map->gamer->facing_up = 1;
	if (map->gamer->degree >= 180 && map->gamer->degree < 360)
		map->gamer->facing_down = 1;
	if (map->gamer->degree <= 90 || map->gamer->degree > 270)
		map->gamer->facing_right = 1;
	if (map->gamer->degree > 90 && map->gamer->degree <= 270)
		map->gamer->facing_left = 1;
	map->gamer->unitx = (double)(((double)map->gamer->posx
	* (double)BLOCK_SIZE) + ((double)BLOCK_SIZE / 2.0));
	map->gamer->unity = (double)(((double)map->gamer->posy
	* (double)BLOCK_SIZE) + ((double)BLOCK_SIZE / 2.0));
}
