/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeckham <ppeckham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:34:50 by ppeckham          #+#    #+#             */
/*   Updated: 2024/09/24 14:42:24 by ppeckham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}

// int	main(void)
// {
// 	char	*s;
// 	int		fd;

// 	s = "Pero que me dins, jellybeans";
// 	fd = open("archivo.txt", O_WRONLY | O_CREAT, 0744);
// 	ft_putstr_fd(s, fd);
// 	close(fd);
// 	return (0);
// }
