/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeckham <ppeckham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:06:30 by ppeckham          #+#    #+#             */
/*   Updated: 2024/10/01 09:51:04 by ppeckham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	*o_lst;

// 	lst = ft_lstnew(&lst);
// 	o_lst = ft_lstnew(&o_lst);
// 	ft_lstadd_front(&lst, o_lst);
// 	printf("%d\n", ft_lstsize(lst));
// 	return (0);
// }
