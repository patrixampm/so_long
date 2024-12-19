/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeckham <ppeckham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:43:56 by ppeckham          #+#    #+#             */
/*   Updated: 2024/09/16 10:18:09 by ppeckham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int ch)
{
	if ((ch < 48 || ch > 57) && (ch < 65 || ch > 90) && (ch < 97 || ch > 122))
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
//     printf("%d", ft_isalnum(i1));
//     printf("%d", ft_isalnum(i2));
//     printf("%d", ft_isalnum(i3));
//     printf("%d", ft_isalnum(i4));
//     printf("%d", ft_isalnum(i5));
//     printf("%d", ft_isalnum(i6));
//     printf("%d", ft_isalnum(i7));
//     printf("%d", ft_isalnum(i8));
//     printf("%d", ft_isalnum(i9));
//     printf("%d", ft_isalnum(i10));
//     printf("%d", ft_isalnum(i11));
//     printf("%d", ft_isalnum(i12));
//     return (0);
// }
