/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_wall_hor.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pganglof <pganglof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 15:58:24 by pganglof          #+#    #+#             */
/*   Updated: 2019/12/13 19:00:00 by pganglof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	fill_wall_hor(t_map *map, t_pos *wall_hor)
{
	if (map->gamer.facing_up)
		wall_hor->unity = (((int)(map->gamer.unity / BLOCK_SIZE)
		* BLOCK_SIZE) - 1);
	else
		wall_hor->unity = ((((int)map->gamer.unity / BLOCK_SIZE)
		* BLOCK_SIZE) + BLOCK_SIZE);
	wall_hor->unitx = (double)(map->gamer.unitx
	+ (map->gamer.unity - wall_hor->unity)
	/ tan(map->gamer.degree * M_PI / 180.0));
	wall_hor->posx = wall_hor->unitx / BLOCK_SIZE;
	wall_hor->posy = wall_hor->unity / BLOCK_SIZE;
	while (wall_hor->posy >= 0 && wall_hor->posx >= 0 && wall_hor->posy < map->y
	&& wall_hor->posx < map->x && map->map[wall_hor->posy][wall_hor->posx] != 1)
	{
		wall_hor->unitx += BLOCK_SIZE / tan(map->gamer.degree * M_PI / 180.0);
		if (map->gamer.facing_up)
			wall_hor->unity -= BLOCK_SIZE;
		else
			wall_hor->unity += BLOCK_SIZE;
		wall_hor->posx = wall_hor->unitx / BLOCK_SIZE;
		wall_hor->posy = wall_hor->unity / BLOCK_SIZE;
	}
}
