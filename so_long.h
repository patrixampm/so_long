/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeckham <ppeckham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 12:09:32 by ppeckham          #+#    #+#             */
/*   Updated: 2024/12/19 18:19:31 by ppeckham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdarg.h>
# include <stdio.h>
# include <limits.h>
# include <stdbool.h>
# include <memory.h>
# include "MLX42-master/include/MLX42/MLX42.h"
// HAY QUE CHECKEAR QUE LAS LIBRERIAS ESTEN TODAS PERMITIDAS, QUE PASA CON NORMINETE EN LA CARPETA DE MLX, QUE ALGUIEN TE INTENTE ROMPER EL JUEGO, LAS VARIABLES ESTAS DE WIDTH
# define WIDTH 2500 // Y BUFFER SIZE, Y LEERTE LA HOJA DE EXAMEN!! POR LO DEMAS ESTA TODO CHACHI, INCLUSO NORMINETTE
# define HEIGHT 1500

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 3
# endif

# include "libft/libft.h"

typedef struct s_element
{
	int		line;
	int		column;
	bool	has_all_cs;
}	t_element;

typedef struct s_game
{
	char		**map;
	t_element	*player;
	t_element	*exit;
	t_element	**collectables;
	mlx_t		*mlx;
	int			move_count;
}	t_game;

// GET_NEXT_LINE
char	*get_next_line(int fd);
int		ft_strlen(const char *str);
char	*ft_strjoin_sl(char const *s1, char const *s2);
char	*ft_strchr(const char *str, int c);
void	*ft_calloc(size_t num, size_t size);

// MAP_CHECKERS
bool	ft_check_1s_wall(char *map_line);
bool	ft_check_alien_elem(char **map_arr);
bool	ft_check_arg_str(char *map);
bool	ft_check_empty_n(char *map_str);
bool	ft_check_even_lines(char **map_arr);
bool	ft_check_map_arr(char **map_arr);
bool	ft_check_middle_wall(char *map_line);
bool	ft_check_minimum_content(char **map_arr);
bool	ft_check_path(char **map_arr);
bool	ft_check_reach(char **map, t_element *player, int cs);
bool	ft_check_wall(char **map_arr);
int		ft_count_cs(char **map_arr);
int		ft_count_map_lines(char **map_arr);
void	ft_flood_fill(char **map, t_element *player, int *cs, bool *exit);
char	**ft_get_map_arr(char *map_str);
char	*ft_get_map_str(char *map_arg);
void	ft_set_exit(char **map_arr, t_element *exit);
void	ft_set_player(char **map_arr, t_element *player);

// GAME
void	ft_error(void);
void	ft_sleep(t_game *game);
bool	ft_set_map(char *map_arg);
void	ft_set_collectables(char **map_arr, t_element **collectables);
void	ft_cleanup_game(t_game *game);
mlx_t	*ft_start_mlx(void);
void	ft_middle_floor(t_game *game, int i, int j);
void	ft_print_player(t_game *game);
void	ft_print_collect(t_game *game);
void	ft_print_exit(t_game *game, int c_count);
void	ft_print_sprite(t_game *game, mlx_image_t *img, int x, int y);
void	ft_leftwall(t_game *game, int i);
void	ft_rightwall(t_game *game, int i);
void	ft_middle_wall(t_game *game, int i, int j);
void	ft_pr_topwall(t_game *game);
void	ft_pr_middle(t_game *game);
void	ft_pr_endwall(t_game *game);
void	ft_print_map(t_game *game);
void	ft_has_all_cs(t_game *game, int c_count);
int		ft_count_c_lst(t_game *game);
void	ft_print_win(t_game *game);
t_game	*ft_set_game(char **map_arr);
void	ft_end_this(t_game *game, mlx_key_data_t keydata);
void	ft_game(char **map_arr);

// MOVES
void	ft_keyhook(mlx_key_data_t keydata, void *param);
void	ft_has_all_cs(t_game *game, int c_count);
void	ft_key_up(t_game *game, int c_count);
void	ft_key_down(t_game *game, int c_count);
void	ft_key_left(t_game *game, int c_count);
void	ft_key_right(t_game *game, int c_count);
void	ft_putnbr_sl(int n);

#endif
