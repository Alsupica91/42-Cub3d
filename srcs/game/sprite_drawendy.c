/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprite_drawendy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pganglof <pganglof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/17 16:17:55 by pganglof          #+#    #+#             */
/*   Updated: 2019/12/17 16:28:08 by pganglof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	sprite_drawendy(t_map *map)
{
	map->sprite[map->i]->drawendy = map->sprite[map->i]->height / 2 + RES_Y / 2;

	printf("map->sprite[%d]->drawendy : %d\n", map->i, map->sprite[map->i]->drawendy);
}
