/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprite_drawstarty.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pganglof <pganglof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/17 16:04:17 by pganglof          #+#    #+#             */
/*   Updated: 2019/12/17 16:23:01 by pganglof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	sprite_drawstarty(t_map *map)
{
	map->sprite[map->i]->drawstarty = (map->sprite[map->i]->height * -1 / 2)
	+ (RES_Y / 2);
	if (map->sprite[map->i]->drawstarty < 0)
		map->sprite[map->i]->drawstarty = 0;

	printf("map->sprite[%d]->drawstarty : %d\n",
	map->i, map->sprite[map->i]->drawstarty);
}
