/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map_arr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeckham <ppeckham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:15:49 by ppeckham          #+#    #+#             */
/*   Updated: 2024/12/19 17:50:59 by ppeckham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

bool	ft_check_map_arr(char **map_arr)
{
	if (!(ft_check_minimum_content(map_arr)))
		return (false);
	if (!(ft_check_even_lines(map_arr)))
		return (false);
	if (!(ft_check_alien_elem(map_arr)))
		return (false);
	if (!(ft_check_wall(map_arr)))
		return (false);
	if (!(ft_check_path(map_arr)))
		return (false);
	return (true);
}
