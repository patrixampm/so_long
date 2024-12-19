/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeckham <ppeckham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 16:51:05 by ppeckham          #+#    #+#             */
/*   Updated: 2024/12/19 17:00:51 by ppeckham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_pr_topwall(t_game *game)
{
	int				j;
	int				x;
	mlx_texture_t	*texture;
	mlx_image_t		*img;

	texture = mlx_load_png("./sprites/t_b_wall-tile.png");
	if (!texture)
		ft_error();
	img = mlx_texture_to_image(game->mlx, texture);
	if (!img)
		ft_error();
	mlx_delete_texture(texture);
	j = 0;
	x = 0;
	while (game->map[0][j] != '\0')
	{
		ft_print_sprite(game, img, x, 0);
		x += 160;
		j++;
	}
}

void	ft_pr_middle(t_game *game)
{
	int				i;
	int				j;

	i = 1;
	while (i < ft_count_map_lines(game->map) - 1)
	{
		ft_leftwall(game, i);
		j = 1;
		while (j < ft_strlen(game->map[0]) - 1)
		{
			ft_middle_floor(game, i, j);
			if (game->map[i][j] == '1')
				ft_middle_wall(game, i, j);
			else if (game->map[i][j] == 'P')
				ft_print_player(game);
			else if (game->map[i][j] == 'C')
				ft_print_collect(game);
			else if (game->map[i][j] == 'E')
				ft_print_exit(game, 1);
			j++;
		}
		ft_rightwall(game, i);
		i++;
	}
}

void	ft_pr_endwall(t_game *game)
{
	int				i;
	int				j;
	int				x;
	mlx_texture_t	*texture;
	mlx_image_t		*img;

	texture = mlx_load_png("./sprites/t_b_wall-tile.png");
	if (!texture)
		ft_error();
	img = mlx_texture_to_image(game->mlx, texture);
	if (!img)
		ft_error();
	mlx_delete_texture(texture);
	i = ft_count_map_lines(game->map) - 1;
	j = 0;
	x = 0;
	while (game->map[i][j] != '\0')
	{
		ft_print_sprite(game, img, x, (i * 160));
		x += 160;
		j++;
	}
}

void	ft_print_map(t_game *game)
{
	ft_pr_topwall(game);
	ft_pr_middle(game);
	ft_pr_endwall(game);
}
