/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_path.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeckham <ppeckham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:19:47 by ppeckham          #+#    #+#             */
/*   Updated: 2024/12/19 17:39:16 by ppeckham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

bool	ft_check_path(char **map_arr)
{
	t_element	*player;
	t_element	*exit;
	int			cs;
	int			lines;

	player = malloc(sizeof(t_element));
	exit = malloc(sizeof(t_element));
	if (!exit || !player)
		return (false);
	ft_set_player(map_arr, player);
	ft_set_exit(map_arr, exit);
	lines = ft_count_map_lines(map_arr);
	cs = ft_count_cs(map_arr);
	if (!(ft_check_reach(map_arr, player, cs)))
	{
		free(player);
		free(exit);
		return (false);
	}
	free(player);
	free(exit);
	return (true);
}
