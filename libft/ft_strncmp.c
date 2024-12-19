/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeckham <ppeckham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:55:56 by ppeckham          #+#    #+#             */
/*   Updated: 2024/09/24 16:21:25 by ppeckham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 == *s2 && *s1 != '\0' && n > 0)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

// int main(void)
// {
//     char    s1[] = "Hoza";
//     char    s2[] = "Hola";
//     char    s3[] = "";
//     char    s4[] = "zzzzzz";
//     char    s5[] = "AAAAAAAAAAA";

//     printf("%d\n", ft_strncmp(s1, s2, 2));
//     printf("%d\n", ft_strncmp(s1, s3, 5));
//     printf("%d\n", ft_strncmp(s4, s5, 45));
//     printf("%d\n", ft_strncmp(s1, s2, 3));
//     printf("%d\n", ft_strncmp(s1, s5, 4));
//     return (0);
// }
