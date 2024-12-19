/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeckham <ppeckham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:13:42 by ppeckham          #+#    #+#             */
/*   Updated: 2024/12/19 18:01:18 by ppeckham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	ft_free_map_arr(char **map_arr)
{
	int	i;

	i = 0;
	while (map_arr[i] != NULL)
	{
		free(map_arr[i]);
		i++;
	}
	free(map_arr);
}

bool	ft_set_map(char *map_arg)
{
	char	*map_str;
	char	**map_arr;

	if (!ft_check_arg_str(map_arg))
		return (false);
	map_str = ft_get_map_str(map_arg);
	if (map_str == NULL)
		return (false);
	if (!(ft_check_empty_n(map_str)))
	{
		free(map_str);
		return (false);
	}
	map_arr = ft_get_map_arr(map_str);
	if (map_arr == NULL)
		return (false);
	if (!(ft_check_map_arr(map_arr)))
	{
		ft_free_map_arr(map_arr);
		return (false);
	}
	ft_game(map_arr);
	return (true);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		if (ft_set_map(av[1]))
			return (0);
		else
			return (1);
	}
}
