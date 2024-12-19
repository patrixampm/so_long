/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flood_fill.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeckham <ppeckham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:21:24 by ppeckham          #+#    #+#             */
/*   Updated: 2024/12/19 18:06:38 by ppeckham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_flood_fill(char **map, t_element *player, int *cs, bool *exit)
{
	if (player->line < 0 || player->column < 0
		|| map[player->line][player->column] == '\0'
		|| map[player->line][player->column] == '1'
		|| map[player->line][player->column] == 'V')
		return ;
	if (map[player->line][player->column] == 'C')
		(*cs)++;
	if (map[player->line][player->column] == 'E')
		*exit = true;
	map[player->line][player->column] = 'V';
	player->line += 1;
	ft_flood_fill(map, player, cs, exit);
	player->line -= 2;
	ft_flood_fill(map, player, cs, exit);
	player->line += 1;
	player->column += 1;
	ft_flood_fill(map, player, cs, exit);
	player->column -= 2;
	ft_flood_fill(map, player, cs, exit);
	player->column += 1;
}
