/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeckham <ppeckham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 11:44:34 by ppeckham          #+#    #+#             */
/*   Updated: 2024/09/16 10:20:12 by ppeckham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int ch)
{
	if (ch < 32 || ch > 126)
	{
		return (0);
	}
	return (1);
}

// int main(void)
// {
//     int    i1 = -2;
//     int    i2 = 0;
//     int    i3 = 31;
//     int    i4 = 32;
//     int    i5 = 57;
//     int    i6 = 67;
//     int    i7 = -85452447;
//     int    i8 = 2;
//     int    i9 = 90;
//     int    i10 = 126;
//     int    i11= 127;
//     int    i12 = 458;
//     printf("%d", ft_isprint(i1));
//     printf("%d", ft_isprint(i2));
//     printf("%d", ft_isprint(i3));
//     printf("%d", ft_isprint(i4));
//     printf("%d", ft_isprint(i5));
//     printf("%d", ft_isprint(i6));
//     printf("%d", ft_isprint(i7));
//     printf("%d", ft_isprint(i8));
//     printf("%d", ft_isprint(i9));
//     printf("%d", ft_isprint(i10));
//     printf("%d", ft_isprint(i11));
//     printf("%d", ft_isprint(i12));
//     return (0);
// }
