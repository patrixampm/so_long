NAME    = so_long
USER    = ppeckham
MLX42   = MLX42-master/build/libmlx42.a -ldl -lglfw -pthread -lm -fsanitize=address
LIBMLX	= MLX42-master/
CFLAGS  = -Wall -Wextra -Werror -g
CC      = clang

MAGENTA = \033[35;1m
YELLOW  = \033[33;1m
GREEN   = \033[32;1m
WHITE   = \033[37;1m
RESET   = \033[0m
GRAY 	= \033[0;90m
BLUE    = \033[34;1m
CYAN    = \033[37;1m
BOLD	= \033[1m
RED		= \033[31;1m

SRCS        :=      main.c \
                          libft/ft_strnstr.c \
                          libft/ft_strmapi.c \
                          libft/ft_lstdelone_bonus.c \
                          libft/ft_lstnew_bonus.c \
                          libft/ft_putchar_fd.c \
                          libft/ft_lstiter_bonus.c \
                          libft/ft_putstr_fd.c \
                          libft/ft_putendl_fd.c \
                          libft/ft_putnbr_fd.c \
                          libft/ft_strlcpy.c \
                          libft/ft_itoa.c \
                          libft/ft_striteri.c \
                          libft/ft_strrchr.c \
                          libft/ft_strlcat.c \
                          libft/ft_strncmp.c \
                          libft/ft_memchr.c \
                          libft/ft_memcmp.c \
                          libft/ft_toupper.c \
                          libft/ft_memset.c \
                          libft/ft_tolower.c \
                          libft/ft_bzero.c \
                          libft/ft_memcpy.c \
                          libft/ft_memmove.c \
                          libft/ft_strtrim.c \
                          libft/ft_strdup.c \
                          libft/ft_substr.c \
                          libft/ft_lstlast_bonus.c \
                          libft/ft_lstadd_front_bonus.c \
                          libft/ft_lstsize_bonus.c \
                          libft/ft_atoi.c \
                          libft/ft_lstadd_back_bonus.c \
                          libft/ft_split.c \
                          libft/ft_lstclear_bonus.c \
                          libft/ft_lstmap_bonus.c \
                          libft/ft_isalnum.c \
                          libft/ft_isascii.c \
                          libft/ft_isprint.c \
                          libft/ft_isalpha.c \
                          libft/ft_isdigit.c \
                          get_next_line/get_next_line.c \
                          get_next_line/get_next_line_utils.c \
                          map_checkers/ft_check_1s_wall.c \
                          map_checkers/ft_check_alien_elem.c \
                          map_checkers/ft_check_arg_str.c \
                          map_checkers/ft_check_empty_n.c \
                          map_checkers/ft_check_even_lines.c \
                          map_checkers/ft_check_map_arr.c \
                          map_checkers/ft_check_middle_wall.c \
                          map_checkers/ft_check_minimum_content.c \
                          map_checkers/ft_check_path.c \
                          map_checkers/ft_check_reach.c \
                          map_checkers/ft_check_wall.c \
                          map_checkers/ft_count_cs.c \
                          map_checkers/ft_count_map_lines.c \
                          map_checkers/ft_flood_fill.c \
                          map_checkers/ft_get_map_arr.c \
                          map_checkers/ft_get_map_str.c \
                          map_checkers/ft_set_exit.c \
                          map_checkers/ft_set_player.c \
                          game/ft_game_utils.c \
                          game/ft_game_utils2.c \
                          game/ft_print_elements.c \
                          game/ft_print_map.c \
                          game/ft_print_more_elem.c \
                          game/ft_set_collectables.c \
                          game/ft_start_game.c \
                          game/ft_write_moves.c \

OBJS	:= ${SRCS:.c=.o}

all: libmlx $(NAME)

libmlx:
		@cmake $(LIBMLX) -B $(LIBMLX)/build && make -C $(LIBMLX)/build -j4

$(NAME):	compiling $(OBJS)
			@echo
			@echo "$(GREEN)Compiling MLX42$(RESET)"
			@make -C MLX42-master/build/
			@$(CC) $(CFLAGS) $(OBJS) $(MLX42) -o $(NAME)
			@echo "$(MAGENTA)SO_LONG compiled!$(RESET)"

$%.o: %.c
			@echo "$(BLUE)Compiling: $(RESET)$(notdir $<)"
			@$(CC) $(CFLAGS) -c $< -o $@


compiling:
			@echo "$(YELLOW)Compiling so_long!$(RESET)"
			
clean:
			@rm -rf $(OBJS)
			@make clean -C MLX42-master/build/
			@echo "$(RED)Cleaning libraries MLX.$(RESET)"
			@echo "$(RED)Cleaning SO_LONG executables.$(RESET)"
			

fclean:
			@rm -rf $(OBJS)
			@rm -rf $(NAME)
			@make clean -C MLX42-master/build/
			@echo "$(RED)Fcleaning libraries MLX.$(RESET)"
			@echo "$(RED)Fcleaning so_long.$(RESET)"

re: fclean all
			@echo "$(YELLOW)So_long recompiled$(RESET)"

norm:
			@echo "$(YELLOW)Norminette of so_long files.$(RESET)"
			@norminette $(SRCS)
			@echo 
		
						
.PHONY: all clean fclean re norm compiling libmlx bonus