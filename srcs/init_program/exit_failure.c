/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_failure.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pganglof <pganglof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 14:20:34 by pganglof          #+#    #+#             */
/*   Updated: 2020/01/06 17:54:08 by pganglof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void		exit_failure(char *str, t_map *map)
{
	ft_lstclear(&(map->garbage_collector), &free);
	free(map);
	if (str)
		ft_putstr_fd(str, 2);
	exit(0);
}
