/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_even_lines.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeckham <ppeckham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:28:03 by ppeckham          #+#    #+#             */
/*   Updated: 2024/12/12 15:41:20 by ppeckham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

bool	ft_check_even_lines(char **map_arr)
{
	int		i;
	int		j;

	i = 1;
	j = ft_strlen(map_arr[0]);
	while (map_arr[i] != NULL)
	{
		if (ft_strlen(map_arr[i]) != j)
			return (false);
		i++;
	}
	return (true);
}
