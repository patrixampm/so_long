/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_minimum_content.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeckham <ppeckham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:28:45 by ppeckham          #+#    #+#             */
/*   Updated: 2024/12/12 15:41:37 by ppeckham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

bool	ft_check_minimum_content(char **map_arr)
{
	int	counts[3];
	int	i;
	int	j;

	counts[0] = 0;
	counts[1] = 0;
	counts[2] = 0;
	i = 0;
	while (map_arr[i] != NULL)
	{
		j = 0;
		while (map_arr[i][j] != '\0')
		{
			if (map_arr[i][j] == 'P')
				counts[0]++;
			if (map_arr[i][j] == 'C')
				counts[1]++;
			if (map_arr[i][j] == 'E')
				counts[2]++;
			j++;
		}
		i++;
	}
	return (counts[0] == 1 && counts[1] > 0 && counts[2] == 1);
}
