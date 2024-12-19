/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_middle_wall.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeckham <ppeckham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:26:11 by ppeckham          #+#    #+#             */
/*   Updated: 2024/12/12 15:41:33 by ppeckham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

bool	ft_check_middle_wall(char *map_line)
{
	int	j;

	j = ft_strlen(map_line) - 1;
	if (map_line[0] != '1' || map_line[j] != '1')
		return (false);
	return (true);
}
