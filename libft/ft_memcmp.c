/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeckham <ppeckham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:06:29 by ppeckham          #+#    #+#             */
/*   Updated: 2024/09/24 14:41:53 by ppeckham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	unsigned char	*nptr1;
	unsigned char	*nptr2;
	size_t			i;

	nptr1 = (unsigned char *)ptr1;
	nptr2 = (unsigned char *)ptr2;
	if (num == 0)
	{
		return (0);
	}
	i = 0;
	while (nptr1[i] == nptr2[i] && i < num - 1)
	{
		i++;
	}
	if (nptr1[i] == nptr2[i])
	{
		return (0);
	}
	else
	{
		return (nptr1[i] - nptr2[i]);
	}
}

// int main(void)
// {
//     char    s1[] = "Hoza";
//     char    s2[] = "Hola";
//     char    s3[] = "";
//     char    s4[] = "Hola\0mundo";
//     char    s5[] = "Hola\0tiempo";

//     printf("%d\n", ft_memcmp(s1, s2, 0));
//     printf("%d\n", ft_memcmp(s1, s3, 0));
//     printf("%d\n", ft_memcmp(s4, s5, 0));
//     printf("%d\n", ft_memcmp(s1, s2, 3));
//     printf("%d\n", ft_memcmp(s1, s5, 4));
//     return (0);
// }
