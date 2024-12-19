/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeckham <ppeckham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 11:44:14 by ppeckham          #+#    #+#             */
/*   Updated: 2024/09/16 10:19:35 by ppeckham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int ch)
{
	if (ch < 48 || ch > 57)
	{
		return (0);
	}
	return (1);
}

// int main(void)
// {
//     int    i1 = -2;
//     int    i2 = 0;
//     int    i3 = 48;
//     int    i4 = 51;
//     int    i5 = 57;
//     int    i6 = 67;
//     printf("%d", ft_isdigit(i1));
//     printf("%d", ft_isdigit(i2));
//     printf("%d", ft_isdigit(i3));
//     printf("%d", ft_isdigit(i4));
//     printf("%d", ft_isdigit(i5));
//     printf("%d", ft_isdigit(i6));
//     return (0);
// }
