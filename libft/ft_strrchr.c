/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeckham <ppeckham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:33:33 by ppeckham          #+#    #+#             */
/*   Updated: 2024/09/25 12:50:38 by ppeckham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;

	i = ft_strlen(str) + 1;
	while (i--)
	{
		if (str[i] == (char)c)
			return ((char *) &str[i]);
	}
	return (NULL);
}

// int main(void)
// {
// 	char *str;
// 	char c;

// 	str = "Hola caracola!";
// 	c = 'a';
// 	printf("%p\n", ft_strrchr(str, c));
// 	return (0);
// }
