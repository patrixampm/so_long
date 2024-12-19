/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeckham <ppeckham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:39:06 by ppeckham          #+#    #+#             */
/*   Updated: 2024/09/23 12:44:04 by ppeckham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*nstr;

	i = 0;
	nstr = malloc(sizeof(char) * ft_strlen((char *)s) + 1);
	if (!nstr)
		return (NULL);
	while (s[i] != '\0')
	{
		nstr[i] = f(i, s[i]);
		i++;
	}
	nstr[i] = '\0';
	return (nstr);
}

// // función intermedia para castear los tipos de f a los requeridos por
// // ft_toupper.
// char    my_func(unsigned int i, char c) 
// {
// 	(void)i;
// 	return (char)ft_toupper(c);
// }

// int	main(void)
// {
// 	char const	*s;

// 	s = "hola mundillo";
// 	printf("%s\n", ft_strmapi(s, my_func));
// 	return (0);
// }
