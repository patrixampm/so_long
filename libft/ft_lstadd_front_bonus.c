/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeckham <ppeckham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:14:51 by ppeckham          #+#    #+#             */
/*   Updated: 2024/10/01 09:49:46 by ppeckham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	new->next = *lst;
	*lst = new;
}

// int main(void)
// {
// t_list	*lst;
// t_list	*new;
// int value = 42;

// lst = ft_lstnew(&lst);
// new = ft_lstnew(&value);

// ft_lstadd_front(&lst, new);
// if (lst == new)
// 	printf("%d\n", 1);
// else
// 	printf("%d\n", -1);

// return (0);

// }
