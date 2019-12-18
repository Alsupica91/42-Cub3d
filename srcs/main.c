/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pganglof <pganglof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 20:25:18 by pganglof          #+#    #+#             */
/*   Updated: 2019/12/18 15:22:47 by pganglof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int		main(int argc, char **argv)
{
	t_map	*map;

	if (argc == 2)
	{
		if (!(map = malloc(sizeof(t_map))))
			return (0);
		ft_bzero(map, sizeof(t_map));
		if (!(map->garbage_collector = malloc(sizeof(t_list))))
			return (0);
		ft_bzero(map->garbage_collector, sizeof(t_list));
		init_map(argv[1], map);
		map->ptr.mlx = mlx_init();
		map->ptr.win = mlx_new_window(map->ptr.mlx,
		RES_X, RES_Y, "Cub3D");
		malloc_texture(map);
		init_texture(map);
		easy_malloc((void**)&map->zbuffer, sizeof(double) * RES_X, map);
		launch_game(map);
	}
	return (0);
}
