/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeckham <ppeckham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 11:40:13 by ppeckham          #+#    #+#             */
/*   Updated: 2024/09/24 14:41:34 by ppeckham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int ch)
{
	if ((ch < 0 || ch > 127))
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
//     int    i7 = -85452447;
//     int    i8 = 2;
//     int    i9 = 90;
//     int    i10 = 123;
//     int    i11= 122;
//     int    i12 = 458;
//     printf("%d", ft_isascii(i1));
//     printf("%d", ft_isascii(i2));
//     printf("%d", ft_isascii(i3));
//     printf("%d", ft_isascii(i4));
//     printf("%d", ft_isascii(i5));
//     printf("%d", ft_isascii(i6));
//     printf("%d", ft_isascii(i7));
//     printf("%d", ft_isascii(i8));
//     printf("%d", ft_isascii(i9));
//     printf("%d", ft_isascii(i10));
//     printf("%d", ft_isascii(i11));
//     printf("%d", ft_isascii(i12));
//     return (0);
// }
