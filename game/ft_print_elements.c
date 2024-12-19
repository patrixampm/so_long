/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_elements.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeckham <ppeckham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:09:26 by ppeckham          #+#    #+#             */
/*   Updated: 2024/12/19 17:03:25 by ppeckham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_print_sprite(t_game *game, mlx_image_t *img, int x, int y)
{
	if (mlx_image_to_window(game->mlx, img, x, y) < 0)
		ft_error();
}

void	ft_leftwall(t_game *game, int i)
{
	mlx_texture_t	*texture;
	mlx_image_t		*img;
	int				y;

	texture = mlx_load_png("./sprites/l_wall-tile.png");
	if (!texture)
		ft_error();
	img = mlx_texture_to_image(game->mlx, texture);
	if (!img)
		ft_error();
	mlx_delete_texture(texture);
	y = i * 160;
	ft_print_sprite(game, img, 0, y);
}

void	ft_rightwall(t_game *game, int i)
{
	mlx_texture_t	*texture;
	mlx_image_t		*img;
	int				x;
	int				y;

	texture = mlx_load_png("./sprites/r_wall-tile.png");
	if (!texture)
		ft_error();
	img = mlx_texture_to_image(game->mlx, texture);
	if (!img)
		ft_error();
	mlx_delete_texture(texture);
	x = 160 * (ft_strlen(game->map[i]) - 1);
	y = i * 160;
	ft_print_sprite(game, img, x, y);
}

void	ft_middle_wall(t_game *game, int i, int j)
{
	int				x;
	int				y;
	mlx_texture_t	*texture;
	mlx_image_t		*img;

	texture = mlx_load_png("./sprites/t_b_wall-tile.png");
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
