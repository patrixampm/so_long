/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_reach.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeckham <ppeckham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:20:44 by ppeckham          #+#    #+#             */
/*   Updated: 2024/12/19 17:39:53 by ppeckham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

bool	ft_check_reach(char **map, t_element *player, int cs)
{
	int		lines;
	char	**map_copy;
	int		i;
	int		cs_in_reach;
	bool	exit_reached;

	lines = ft_count_map_lines(map);
	i = 0;
	map_copy = (malloc(lines * sizeof(char *)));
	while (i < lines)
	{
		map_copy[i] = ft_strdup(map[i]);
		i++;
	}
	cs_in_reach = 0;
	exit_reached = false;
	ft_flood_fill(map_copy, player, &cs_in_reach, &exit_reached);
	i = 0;
	while (i < lines)
	{
		free(map_copy[i]);
		i++;
	}
	free(map_copy);
	return (cs_in_reach == cs && exit_reached);
}
