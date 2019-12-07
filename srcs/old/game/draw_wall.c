/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_wall.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pganglof <pganglof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 18:41:13 by pganglof          #+#    #+#             */
/*   Updated: 2019/12/05 14:11:11 by pganglof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

/*
** Q = 12
** S = 1
** D = 2
** Z = 6
** ESC = 53
*/

int			draw_wall(int key, void *param)
{
	t_map			*map;
	unsigned int	*str;

	map = (t_map*)param;
	if (key == 1 || key == 2 || key == 6 || key == 12)
		move_gamer(key, map);
	//printf("map->x : %d\nmap->y : %d\n", map->x, map->y);
	printf("degree 1: %f\n", map->gamer->degree);
	map->ptr->img = mlx_new_image(map->ptr->mlx, PROJ_PLANE_X, PROJ_PLANE_Y);
	str = (unsigned int*)mlx_get_data_addr(map->ptr->img, &map->ptr->b_p,
	&map->ptr->size_l, &map->ptr->endian);
	draw_wall2(map, str);
	mlx_put_image_to_window(map->ptr->mlx,
	map->ptr->win, map->ptr->img, 0, 0);
	return (1);
}