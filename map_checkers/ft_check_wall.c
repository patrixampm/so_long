/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_wall.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeckham <ppeckham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:25:28 by ppeckham          #+#    #+#             */
/*   Updated: 2024/12/12 15:41:57 by ppeckham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

bool	ft_check_wall(char **map_arr)
{
	int	i;
	int	map_lines;

	i = 0;
	map_lines = -1;
	while (map_arr[i] != NULL)
	{
		map_lines++;
		i++;
	}
	if (!(ft_check_1s_wall(map_arr[0]))
		|| !(ft_check_1s_wall(map_arr[map_lines])))
		return (false);
	i = 1;
	while (i < map_lines)
	{
		if (!(ft_check_middle_wall(map_arr[i])))
			return (false);
		i++;
	}
	return (true);
}
