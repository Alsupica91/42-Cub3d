/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprite_drawendx.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pganglof <pganglof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/17 16:34:40 by pganglof          #+#    #+#             */
/*   Updated: 2019/12/18 20:45:38 by pganglof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	sprite_drawendx(t_map *map)
{
	map->sprite[map->i]->drawendx = map->sprite[map->i]->width / 2
	+ map->sprite[map->i]->screenx;
	if (map->sprite[map->i]->drawendx >= RES_X)
		map->sprite[map->i]->drawendx = RES_X - 1;
}
