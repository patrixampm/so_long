/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_empty_n.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeckham <ppeckham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:19:10 by ppeckham          #+#    #+#             */
/*   Updated: 2024/12/19 17:09:22 by ppeckham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

bool	ft_check_empty_n(char *map_str)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(map_str) - 1;
	while (map_str[i] == '\n')
		i++;
	while (map_str[j] == '\n')
		j--;
	while (i < j)
	{
		if (map_str[i] == '\n' && map_str[i + 1] == '\n')
			return (false);
		i++;
	}
	return (true);
}
