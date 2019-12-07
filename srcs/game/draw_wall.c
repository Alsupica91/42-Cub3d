/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_wall.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pganglof <pganglof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 18:41:13 by pganglof          #+#    #+#             */
/*   Updated: 2019/12/07 19:34:19 by pganglof         ###   ########.fr       */
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

	(void)key;
	map = (t_map*)param;
	if (key == 12)
		map->gamer->av = 1;
	if (key == 6)
		map->gamer->re = 1;
	if (key == 1)
		map->gamer->ga = 1;
	if (key == 2)
		map->gamer->dr = 1;
	if (key == 123)
		map->gamer->rga = 1;
	if (key == 124)
		map->gamer->rdr = 1;	
	move_gamer(map);
	map->ptr->img = mlx_new_image(map->ptr->mlx, RES_X, RES_Y);
	str = (unsigned int*)mlx_get_data_addr(map->ptr->img, &map->ptr->b_p,
	&map->ptr->size_l, &map->ptr->endian);
	define_dis(map, str);
	mlx_put_image_to_window(map->ptr->mlx,
	map->ptr->win, map->ptr->img, 0, 0);
	return (1);
}
