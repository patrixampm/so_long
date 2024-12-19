/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_game_utils2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeckham <ppeckham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 13:51:44 by ppeckham          #+#    #+#             */
/*   Updated: 2024/12/19 18:05:41 by ppeckham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_cleanup_game(t_game *game)
{
	int	cs_count;
	int	i;

	cs_count = ft_count_cs(game->map);
	i = 0;
	if (!game)
		return ;
	free(game->player);
	free(game->exit);
	while (i < cs_count)
	{
		free(game->collectables[i]);
		i++;
	}
	free(game->collectables);
	free(game);
}

void	ft_key_up(t_game *game, int c_count)
{
	if (game->map[game->player->line - 1][game->player->column] != '1')
	{
		if (!(game->player->has_all_cs))
		{
			game->player->line -= 1;
			game->move_count++;
			ft_putnbr_sl(game->move_count);
			write(1, "\n", 1);
			ft_print_player(game);
			ft_middle_floor(game, game->player->line + 1, game->player->column);
			if (game->map[game->player->line + 1][game->player->column] == 'E')
				ft_print_exit(game, c_count);
		}
		else if (game->player->has_all_cs
			&& (game->map[game->player->line - 1][game->player->column] == 'E'
			|| game->map[game->player->line - 1][game->player->column] == '0'))
		{
			game->player->line -= 1;
			game->move_count++;
			ft_putnbr_sl(game->move_count);
			write(1, "\n", 1);
			ft_print_player(game);
			ft_middle_floor(game, game->player->line + 1, game->player->column);
		}
	}
}

void	ft_key_down(t_game *game, int c_count)
{
	if (game->map[game->player->line + 1][game->player->column] != '1')
	{
		if (!(game->player->has_all_cs))
		{
			game->player->line += 1;
			game->move_count++;
			ft_putnbr_sl(game->move_count);
			write(1, "\n", 1);
			ft_print_player(game);
			ft_middle_floor(game, game->player->line - 1, game->player->column);
			if (game->map[game->player->line - 1][game->player->column] == 'E')
				ft_print_exit(game, c_count);
		}
		else if (game->player->has_all_cs
			&& (game->map[game->player->line + 1][game->player->column] == 'E'
			|| game->map[game->player->line + 1][game->player->column] == '0'))
		{
			game->player->line += 1;
			game->move_count++;
			ft_putnbr_sl(game->move_count);
			write(1, "\n", 1);
			ft_print_player(game);
			ft_middle_floor(game, game->player->line - 1, game->player->column);
		}
	}
}

void	ft_key_left(t_game *game, int c_count)
{
	if (game->map[game->player->line][game->player->column - 1] != '1')
	{
		if (!(game->player->has_all_cs))
		{
			game->player->column -= 1;
			game->move_count++;
			ft_putnbr_sl(game->move_count);
			write(1, "\n", 1);
			ft_print_player(game);
			ft_middle_floor(game, game->player->line, game->player->column + 1);
			if (game->map[game->player->line][game->player->column + 1] == 'E')
				ft_print_exit(game, c_count);
		}
		else if (game->player->has_all_cs
			&& (game->map[game->player->line][game->player->column - 1] == 'E'
			|| game->map[game->player->line][game->player->column - 1] == '0'))
		{
			game->player->column -= 1;
			game->move_count++;
			ft_putnbr_sl(game->move_count);
			write(1, "\n", 1);
			ft_print_player(game);
			ft_middle_floor(game, game->player->line, game->player->column + 1);
		}
	}
}

void	ft_key_right(t_game *game, int c_count)
{
	if (game->map[game->player->line][game->player->column + 1] != '1')
	{
		if (!(game->player->has_all_cs))
		{
			game->player->column += 1;
			game->move_count++;
			ft_putnbr_sl(game->move_count);
			write(1, "\n", 1);
			ft_print_player(game);
			ft_middle_floor(game, game->player->line, game->player->column - 1);
			if (game->map[game->player->line][game->player->column - 1] == 'E')
				ft_print_exit(game, c_count);
		}
		else if (game->player->has_all_cs
			&& (game->map[game->player->line][game->player->column + 1] == 'E'
			|| game->map[game->player->line][game->player->column + 1] == '0'))
		{
			game->player->column += 1;
			game->move_count++;
			ft_putnbr_sl(game->move_count);
			write(1, "\n", 1);
			ft_print_player(game);
			ft_middle_floor(game, game->player->line, game->player->column - 1);
		}
	}
}
