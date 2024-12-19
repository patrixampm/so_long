/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_map_lines.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeckham <ppeckham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:22:16 by ppeckham          #+#    #+#             */
/*   Updated: 2024/12/19 17:58:41 by ppeckham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	ft_count_map_lines(char **map_arr)
{
	int	lines;
	int	i;

	lines = 0;
	i = 0;
	while (map_arr[i] != NULL)
	{
		lines++;
		i++;
	}
	return (lines);
}
