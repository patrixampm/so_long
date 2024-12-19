/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeckham <ppeckham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:04:16 by ppeckham          #+#    #+#             */
/*   Updated: 2024/09/23 15:33:53 by ppeckham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

// int	main(void)
// {
// 	char	c;
// 	int		fd;

// 	c = 'P';
// 	fd = open("archivo.txt", O_WRONLY | O_CREAT, 0744);
// 	ft_putchar_fd(c, fd);
// 	close(fd);
// 	return (0);
// }
