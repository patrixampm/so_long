/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_alien_elem.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeckham <ppeckham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:27:23 by ppeckham          #+#    #+#             */
/*   Updated: 2024/12/12 15:41:08 by ppeckham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

bool	ft_check_alien_elem(char **map_arr)
{
	int	i;
	int	j;

	i = 0;
	while (map_arr[i] != NULL)
	{
		j = 0;
		while (map_arr[i][j] != '\0')
		{
			if (map_arr[i][j] == 'P'
				|| map_arr[i][j] == 'C'
				|| map_arr[i][j] == 'E'
				|| map_arr[i][j] == '1'
				|| map_arr[i][j] == '0')
				j++;
			else
				return (false);
		}
		i++;
	}
	return (true);
}
