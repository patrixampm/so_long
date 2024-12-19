/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeckham <ppeckham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:55:06 by ppeckham          #+#    #+#             */
/*   Updated: 2024/09/23 13:29:15 by ppeckham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void ft_putstr(unsigned int i, char *s)
// {
// 	(void)i;
// 	write(1, s, 1);
// }

// int main(void)
// {
// 	char *str = "778ugu65fdfd";

// 	ft_striteri(str, &ft_putstr);
// 	return (0);
// }
