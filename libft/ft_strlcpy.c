/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeckham <ppeckham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:21:22 by ppeckham          #+#    #+#             */
/*   Updated: 2024/09/16 10:26:38 by ppeckham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	contador1;
	unsigned int	contador2;

	contador1 = 0;
	contador2 = 0;
	while (src[contador1] != '\0')
	{
		contador1++;
	}
	if (size == 0)
	{
		return (contador1);
	}
	while (src[contador2] != '\0' && contador2 < size -1)
	{
		dest[contador2] = src[contador2];
		contador2++;
	}
	dest[contador2] = '\0';
	return (contador1);
}

// int main(void)
// {
//     char    dest[20];
//     char    src[] = "Hola mundoo";

//     ft_strlcpy(dest, src, 5);
//     printf("%d\n", ft_strlcpy(dest, src, 5));
//     return (0);
// }
