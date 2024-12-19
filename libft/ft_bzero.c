/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeckham <ppeckham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 11:37:33 by ppeckham          #+#    #+#             */
/*   Updated: 2024/09/24 14:41:18 by ppeckham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t n)
{
	size_t	i;
	char	*nptr;

	i = 0;
	nptr = ptr;
	while (i < n)
	{
		nptr[i] = '\0';
		i++;
	}
}

// int main(void)
// {
//     char *buffer;
//     buffer = "0123567089";

//     printf("%p\n", buffer);
//     ft_bzero(buffer, 0);
//     printf("%p\n", buffer);

//     return (0);
// }
