/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_start_game.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeckham <ppeckham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 16:12:05 by ppeckham          #+#    #+#             */
/*   Updated: 2024/12/19 18:05:08 by ppeckham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_error(void)
{
	fprintf(stderr, "%s", mlx_strerror(mlx_errno));
	exit(EXIT_FAILURE);
}

mlx_t	*ft_start_mlx(void)
{
	mlx_t	*mlx;

	mlx_set_setting(MLX_MAXIMIZED, false);
	mlx = mlx_init(WIDTH, HEIGHT, "So_long", true);
	if (!mlx)
		ft_error();
	return (mlx);
}

t_game	*ft_set_game(char **map_arr)
{
	t_game		*game;
	t_element	*player;
	t_element	*exit;
	t_element	**collectables;
	int			cs_count;

	game = malloc(sizeof(t_game));
	player = malloc(sizeof(t_element));
	exit = malloc(sizeof(t_element));
	cs_count = ft_count_cs(map_arr);
	collectables = malloc(sizeof(t_element *) * cs_count + 1);
	ft_set_player(map_arr, player);
	ft_set_exit(map_arr, exit);
	game->map = map_arr;
	ft_set_collectables(map_arr, collectables);
	game->player = player;
	game->exit = exit;
	game->collectables = collectables;
	game->move_count = 0;
	return (game);
}

void	ft_keyhook(mlx_key_data_t keydata, void *param)
{
	int		c_count;
	t_game	*game;

	game = (t_game *)param;
	c_count = ft_count_cs(game->map);
	if (game->map[game->player->line][game->player->column] == 'C')
		game->map[game->player->line][game->player->column] = '0';
	if (c_count == 0 && game->player->has_all_cs == false)
		ft_has_all_cs(game, c_count);
	if (game->player->has_all_cs
		&& game->map[game->player->line][game->player->column] == 'E'
		&& game->player->has_all_cs)
		ft_end_this(game, keydata);
	if (keydata.key == MLX_KEY_ESCAPE && keydata.action == MLX_PRESS)
		mlx_close_window(game->mlx);
	if (keydata.key == MLX_KEY_UP && keydata.action == MLX_PRESS)
		ft_key_up(game, c_count);
	if (keydata.key == MLX_KEY_DOWN && keydata.action == MLX_PRESS)
		ft_key_down(game, c_count);
	if (keydata.key == MLX_KEY_LEFT && keydata.action == MLX_PRESS)
		ft_key_left(game, c_count);
	if (keydata.key == MLX_KEY_RIGHT && keydata.action == MLX_PRESS)
		ft_key_right(game, c_count);
}

void	ft_game(char **map_arr)
{
	t_game			*game;
	mlx_t			*mlx;

	mlx = ft_start_mlx();
	game = ft_set_game(map_arr);
	game->mlx = mlx;
	ft_print_map(game);
	mlx_key_hook(game->mlx, ft_keyhook, game);
	mlx_loop(game->mlx);
	ft_cleanup_game(game);
	mlx_terminate(game->mlx);
}
