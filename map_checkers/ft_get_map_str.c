/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_map_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeckham <ppeckham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:18:15 by ppeckham          #+#    #+#             */
/*   Updated: 2024/12/16 11:14:32 by ppeckham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

char	*ft_get_map_str(char *map_arg)
{
	char	*map_str;
	char	*temp;
	int		fd;
	char	*line;

	fd = open(map_arg, O_RDONLY);
	if (fd == -1)
		return (NULL);
	line = get_next_line(fd);
	map_str = malloc(1);
	if (!map_str)
		return (NULL);
	map_str[0] = '\0';
	while (line)
	{
		temp = map_str;
		map_str = ft_strjoin_sl(temp, line);
		free(line);
		line = get_next_line(fd);
	}
	close(fd);
	return (map_str);
}
