/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_map_arr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeckham <ppeckham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:17:29 by ppeckham          #+#    #+#             */
/*   Updated: 2024/12/19 17:43:03 by ppeckham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

char	**ft_get_map_arr(char *map_str)
{
	char	**map_arr;

	map_arr = ft_split(map_str, '\n');
	free(map_str);
	if (!map_arr)
		return (NULL);
	return (map_arr);
}
