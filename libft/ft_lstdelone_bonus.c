/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeckham <ppeckham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:39:03 by ppeckham          #+#    #+#             */
/*   Updated: 2024/10/01 09:50:15 by ppeckham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}

// void	del_str(void *str)
// {
// 	free(str);
// }

// int main(void)
// {
// 	t_list	*lst;
// 	char	*content;

// 	content = malloc(strlen("hola mundo") + 1);
// 	strcpy(content, "hola mundo");
// 	lst = ft_lstnew(content);
// 	ft_lstdelone(lst, del_str);

// 	return (0);
// }
