/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_cs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeckham <ppeckham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:23:14 by ppeckham          #+#    #+#             */
/*   Updated: 2024/12/19 17:59:55 by ppeckham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	ft_count_cs(char **map_arr)
{
	int	i;
	int	j;
	int	cs;

	i = 0;
	cs = 0;
	while (map_arr[i] != NULL)
	{
		j = 0;
		while (map_arr[i][j] != '\0')
		{
			if (map_arr[i][j] == 'C')
				cs++;
			j++;
		}
		i++;
	}
	return (cs);
}
