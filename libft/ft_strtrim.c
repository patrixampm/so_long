/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeckham <ppeckham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:16:56 by ppeckham          #+#    #+#             */
/*   Updated: 2024/09/30 13:31:25 by ppeckham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*sub;
	size_t		i;
	size_t		f;

	f = ft_strlen(s1);
	i = 0;
	while (ft_strchr(set, s1[i]) != NULL && i < f)
	{
		i++;
	}
	while (ft_strchr (set, s1[f]) != NULL && i < f)
	{
		f--;
	}
	sub = ft_substr(s1, i, f - i + 1);
	if (!sub)
		return (0);
	return (sub);
}

// int	main(void)
// {
// 	char const	*s1 = "ihzeilohezol";
// 	char const	*set = "iloh";
// 	char		*duplicado = ft_strtrim(s1, set);

// 	printf("%s\n", duplicado);
// 	free(duplicado);
// 	return (0);
// }

// int	main(void)
// {
// 	char const	*s1 = "holihoholcaracolih";
// 	char const	*set = "iloh";

// 	printf("%d\n", checkend(s1, set));
// 	return (0);
// }
