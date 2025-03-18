/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wxi <wxi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 12:43:01 by wxi               #+#    #+#             */
/*   Updated: 2024/06/07 23:17:25 by wxi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*next;

	if (!lst || !*lst || !del)
		return ;
	current = *lst;
	while (current)
	{
		next = current->next;
		del(current->content);
		free (current);
		current = next;
	}
	*lst = NULL;
}

// void	ft_lstclear(t_list **lst, void (*del)(void*))
// {
// 	t_list	*current;
// 	t_list	*next;
// 	if (!lst || !*lst || !del)
// 		return ;
// 	//set current to the first node of a linked list
// 	current = *lst;
// 	//as long as the address of current is not NULL
// 	while(current)
// 	{
// 		//use a node called next to store the address stored in current node
// 		next = 	current->next;
// 		//delete the content of current node
// 		del(current->content);
// 		//free the node at the address that current points to
// 		free(current);
// 		//assign current the address points to the next node 
// 		current = next;
// 	}
// 	*lst = NULL; 
// }