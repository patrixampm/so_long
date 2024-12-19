/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeckham <ppeckham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 11:09:57 by ppeckham          #+#    #+#             */
/*   Updated: 2024/09/24 14:42:35 by ppeckham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*nstr;
	int		j;
	int		i;

	j = 0;
	i = 0;
	while (str[j] != '\0')
		j++;
	nstr = (char *)malloc(j + 1);
	if (nstr == NULL)
		return (NULL);
	while (i < j)
	{
		nstr[i] = str[i];
		i++;
	}
	nstr[i] = '\0';
	return (nstr);
}

// int	main(void)
// {
// 	char original[] = "Hola, mundo!";
// 	char *duplicado = ft_strdup(original);
// 	char *ptr;

// 	ptr = &original[0];
// 	printf("%s\n", original);
// 	printf("%p\n", ptr);
// 	printf("%s\n", duplicado);
// 	printf("%p\n", ft_strdup(original));

// 	free(duplicado);

// 	return (0);
// }
