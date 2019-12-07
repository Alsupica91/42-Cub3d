/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   define_height.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pganglof <pganglof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 17:28:47 by pganglof          #+#    #+#             */
/*   Updated: 2019/12/07 19:44:15 by pganglof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	define_height(t_map *map)
{
	if (map->gamer->perpwalldist > 0)
		map->gamer->lineheight = (double)RES_Y / map->gamer->perpwalldist;
	else
		map->gamer->lineheight = ((double)RES_Y - 1.0);
/*	printf("beta : %f\n", map->gamer->beta);
	printf("perpwalldist : %f\n", map->gamer->perpwalldist);
	printf("lineheight : %f\n", map->gamer->lineheight);*/
	//map->gamer->drawstart = ((map->gamer->lineheight) / (2 + RES_Y) / 2);
	map->gamer->drawstart = (RES_Y / 2) - (map->gamer->lineheight / 2);
	if (map->gamer->drawstart <= 0)
	{
	//	printf("drawstart < 0\n");
		map->gamer->drawstart = 0;
	}
	map->gamer->drawend = map->gamer->drawstart + map->gamer->lineheight;
	if (map->gamer->drawend >= RES_Y)
	{
	//	printf("drawend >= RES_Y\n");
		map->gamer->drawend = RES_Y - 1;
	}
//	printf("drawstart : %d\n", map->gamer->drawstart);
//	printf("drawend : %d\n\n", map->gamer->drawend);
}
