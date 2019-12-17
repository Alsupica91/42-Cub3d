/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprite_screenx.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pganglof <pganglof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/17 15:43:15 by pganglof          #+#    #+#             */
/*   Updated: 2019/12/17 17:21:47 by pganglof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	sprite_screenx(t_map *map)
{
	map->sprite[map->i]->screenx = (int)(((double)RES_X / 2.0) * (1.0 +
	(map->sprite[map->i]->transformx /
	map->sprite[map->i]->transformy)));

	printf("map->sprite[%d]->screenx : %d\n", map->i, map->sprite[map->i]->screenx);
}
