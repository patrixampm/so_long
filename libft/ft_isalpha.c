/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeckham <ppeckham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:09:24 by ppeckham          #+#    #+#             */
/*   Updated: 2024/09/16 10:18:33 by ppeckham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int ch)
{
	if ((ch < 65 || ch > 90) && (ch < 97 || ch > 122))
	{
		return (0);
	}
	return (1);
}

// int main(void)
// {
//     int    i1 = -2;
//     int    i2 = 2;
//     int    i3 = 90;
//     int    i4 = 123;
//     int    i5 = 122;
//     int    i6 = 67;
//     printf("%d", ft_isalpha(i1));
//     printf("%d", ft_isalpha(i2));
//     printf("%d", ft_isalpha(i3));
//     printf("%d", ft_isalpha(i4));
//     printf("%d", ft_isalpha(i5));
//     printf("%d", ft_isalpha(i6));
//     return (0);
//   }
