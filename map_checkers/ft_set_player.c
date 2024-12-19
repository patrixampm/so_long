/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_player.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeckham <ppeckham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:24:32 by ppeckham          #+#    #+#             */
/*   Updated: 2024/12/19 18:07:28 by ppeckham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_set_player(char **map_arr, t_element *player)
{
	int	i;
	int	j;

	i = 0;
	while (map_arr[i] != NULL)
	{
		j = 0;
		while (map_arr[i][j] != '\0')
		{
			if (map_arr[i][j] == 'P')
			{
				player->line = i;
				player->column = j;
			}
			j++;
		}
		i++;
	}
	player->has_all_cs = false;
}
