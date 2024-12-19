/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeckham <ppeckham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:55:13 by ppeckham          #+#    #+#             */
/*   Updated: 2024/10/01 09:49:19 by ppeckham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node;

	if (!new || !lst)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last_node = ft_lstlast(*lst);
	last_node->next = new;
}

// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	*new;
// 	int		value;

// 	value = 42;
// 	lst = ft_lstnew(&lst);
// 	new = ft_lstnew(&value);
// 	ft_lstadd_back(&lst, new);
// 	if (new == ft_lstlast(lst))
// 		printf("%d\n", 1);
// 	else
// 		printf("%d\n", -1);

// 	return (0);
// }
