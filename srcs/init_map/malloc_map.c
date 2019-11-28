/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pganglof <pganglof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 14:14:09 by pganglof          #+#    #+#             */
/*   Updated: 2019/11/26 17:29:03 by pganglof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int		malloc_map(t_map *map)
{
	int		i;

	map->map = NULL;
	if (!(map->map = malloc(sizeof(int*) * map->y)))
		return (0);
	i = map->y;
	while (i-- > 0)
	{
		if (!(map->map[i] = malloc(sizeof(int) * map->x)))
			return (0);
	}
	return (1);
}
