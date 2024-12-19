/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeckham <ppeckham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:34:49 by ppeckham          #+#    #+#             */
/*   Updated: 2024/10/01 09:50:02 by ppeckham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*next_node;

	if (!lst || !*lst)
		return ;
	current = *lst;
	while (current)
	{
		next_node = current->next;
		del(current->content);
		free(current);
		current = next_node;
	}
	*lst = NULL;
}

// void	del_str(void *str)
// {
// 	free(str);
// }

// void print_list(t_list *head) {
//     t_list *temp = head;
//     while (temp) {
//         printf("%s -> ", (char *)temp->content);
//         temp = temp->next;
//     }
//     printf("NULL\n");
// }

// int main(void)
// {
// 	t_list	*list = NULL;
// 	char	*string[] = {"hola", " mundo", " desde", "c", NULL};
// 	int		i = 0;
// 	char	*content;

// 	while (string[i] != NULL)
// 	{
// 		content = malloc(ft_strlen((string[i]) + 1));
// 		strcpy(content, string[i]);
// 		t_list *new_node = ft_lstnew(content);
// 		ft_lstadd_back(&list, new_node);
// 		i++;
// 	}
// 	print_list(list);
// 	ft_lstclear(&list, del_str);
// 	print_list(list);
// 	return (0);
// }
