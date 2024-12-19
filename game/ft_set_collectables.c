/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_collectables.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeckham <ppeckham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 16:34:33 by ppeckham          #+#    #+#             */
/*   Updated: 2024/12/19 16:36:02 by ppeckham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_set_collectables(char **map_arr, t_element **collectables)
{
	int			i;
	int			j;
	int			c;
	t_element	*collect;

	i = 0;
	c = 0;
	while (map_arr[i] != NULL)
	{
		j = 0;
		while (map_arr[i][j] != '\0')
		{
			if (map_arr[i][j] == 'C')
			{
				collect = malloc(sizeof(t_element));
				collectables[c] = collect;
				collectables[c]->line = i;
				collectables[c]->column = j;
				c++;
			}
			j++;
		}
		i++;
	}
	collectables[c] = NULL;
}
