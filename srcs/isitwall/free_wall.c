/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_wall.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pganglof <pganglof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 17:20:56 by pganglof          #+#    #+#             */
/*   Updated: 2019/11/29 17:01:39 by pganglof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

t_pos	*free_wall(t_pos *ret, t_pos *wall)
{
	free(wall);
	wall = NULL;
	return (ret);
}
