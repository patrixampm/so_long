/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeckham <ppeckham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 10:44:18 by ppeckham          #+#    #+#             */
/*   Updated: 2024/09/24 15:44:01 by ppeckham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	j;
	size_t	p;

	i = 0;
	j = 0;
	p = 0;
	while (dest[i] != '\0' && i < destsize)
		i++;
	while (src[p] != '\0')
		p++;
	while (src[j] != '\0' && (i + j + 1) < destsize)
	{
		dest[j + i] = src[j];
		j++;
	}
	if (i < destsize)
		dest[j + i] = '\0';
	return (i + p);
}

// int main(void)
// {
//     char    str1[8] = "Hola ";
//     char    str2[] = "mundooooooooooooo";

//     // ft_strlcat(str1, str2, 14);
//     printf("%zu\n", ft_strlcat(str1, str2, 14));
//     return (0);
// }
