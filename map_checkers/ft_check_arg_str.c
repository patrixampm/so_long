/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arg_str.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeckham <ppeckham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:29:22 by ppeckham          #+#    #+#             */
/*   Updated: 2024/12/19 17:59:35 by ppeckham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

bool	ft_check_arg_str(char *map)
{
	int	i;

	i = 0;
	if (map[i] != 'm' || map[i + 1] != 'a'
		|| map[i + 2] != 'p' || map[i + 3] != 's'
		|| map[i + 4] != '/')
		return (false);
	i = ft_strlen(map) - 1;
	if (map[i] != 'r' || map[i - 1] != 'e'
		|| map[i - 2] != 'b' || map[i - 3] != '.')
		return (false);
	return (true);
}
