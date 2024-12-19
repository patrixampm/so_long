/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_game_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeckham <ppeckham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 15:33:43 by ppeckham          #+#    #+#             */
/*   Updated: 2024/12/19 18:05:56 by ppeckham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_has_all_cs(t_game *game, int c_count)
{
	int	i;

	i = ft_count_c_lst(game);
	game->player->has_all_cs = true;
	ft_print_exit(game, c_count);
	while (i > -1)
	{
		free(game->collectables[i]);
		i--;
	}
}

void	ft_end_this(t_game *game, mlx_key_data_t keydata)
{
	ft_print_win(game);
	if ((keydata.key == MLX_KEY_UP && keydata.action == MLX_PRESS)
		|| (keydata.key == MLX_KEY_DOWN && keydata.action == MLX_PRESS)
		|| (keydata.key == MLX_KEY_LEFT && keydata.action == MLX_PRESS)
		|| (keydata.key == MLX_KEY_RIGHT && keydata.action == MLX_PRESS))
		ft_sleep(game);
}

void	ft_sleep(t_game *game)
{
	sleep(1);
	mlx_close_window(game->mlx);
}

int	ft_count_c_lst(t_game *game)
{
	int	i;

	i = 0;
	while (game->collectables[i] != NULL)
		i++;
	return (i);
}

void	ft_print_win(t_game *game)
{
	mlx_texture_t	*texture;
	mlx_image_t		*img;

	texture = mlx_load_png("./sprites/end.png");
	if (!texture)
		ft_error();
	img = mlx_texture_to_image(game->mlx, texture);
	if (!img)
		ft_error();
	mlx_delete_texture(texture);
	ft_print_sprite(game, img, 900, 500);
}
