/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeckham <ppeckham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:49:46 by ppeckham          #+#    #+#             */
/*   Updated: 2024/09/24 14:42:14 by ppeckham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}

// int	main(void)
// {
// 	char	*s;
// 	int		fd;

// 	s = "Pero que me dins, jellybeans";
// 	fd = open("archivo.txt", O_WRONLY | O_CREAT, 0744);
// 	ft_putendl_fd(s, fd);
// 	close(fd);
// 	return (0);
// }
