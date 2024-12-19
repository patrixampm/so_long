/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_more_elem.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeckham <ppeckham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:15:15 by ppeckham          #+#    #+#             */
/*   Updated: 2024/12/19 17:02:22 by ppeckham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_middle_floor(t_game *game, int i, int j)
{
	int				x;
	int				y;
	mlx_texture_t	*texture;
	mlx_image_t		*img;

	texture = mlx_load_png("./sprites/floor-tile.png");
	if (!texture)
		ft_error();
	img = mlx_texture_to_image(game->mlx, texture);
	if (!img)
		ft_error();
	mlx_delete_texture(texture);
	x = j * 160;
	y = i * 160;
	ft_print_sprite(game, img, x, y);
}

void	ft_print_player(t_game *game)
{
	int				x;
	int				y;
	mlx_texture_t	*texture;
	mlx_image_t		*img;

	texture = mlx_load_png("./sprites/player1.png");
	if (!texture)
		ft_error();
	img = mlx_texture_to_image(game->mlx, texture);
	if (!img)
		ft_error();
	mlx_delete_texture(texture);
	x = (game->player->column * 160) - 10;
	y = (game->player->line * 160) + 10;
	ft_print_sprite(game, img, x, y);
}

void	ft_print_collect(t_game *game)
{
	int				x;
	int				y;
	mlx_texture_t	*texture;
	mlx_image_t		*img;
	int				c_count;

	c_count = ft_count_cs(game->map) - 1;
	texture = mlx_load_png("./sprites/pizza.png");
	if (!texture)
		ft_error();
	img = mlx_texture_to_image(game->mlx, texture);
	if (!img)
		ft_error();
	mlx_delete_texture(texture);
	while (c_count >= 0)
	{
		x = (game->collectables[c_count]->column * 160) + 33;
		y = (game->collectables[c_count]->line * 160) + 33;
		ft_print_sprite(game, img, x, y);
		c_count--;
	}
}

void	ft_print_exit(t_game *game, int c_count)
{
	int				x;
	int				y;
	mlx_texture_t	*texture;
	mlx_image_t		*img;

	if (c_count != 0)
		texture = mlx_load_png("./sprites/piggs.png");
	else
		texture = mlx_load_png("./sprites/uber.png");
	if (!texture)
		ft_error();
	img = mlx_texture_to_image(game->mlx, texture);
	if (!img)
		ft_error();
	mlx_delete_texture(texture);
	x = game->exit->column * 160;
	y = game->exit->line * 160;
	ft_print_sprite(game, img, x, y);
}
