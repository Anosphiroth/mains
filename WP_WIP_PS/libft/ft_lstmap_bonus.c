/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaamonch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:57:25 by vaamonch          #+#    #+#             */
/*   Updated: 2024/11/21 11:57:27 by vaamonch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*node;

	new_lst = NULL;
	node = (t_list *)malloc(sizeof(t_list));
	if (!lst || !node)
		return (NULL);
	node->content = (*f)(lst->content);
	node->next = NULL;
	new_lst = node;
	while (lst->next)
	{
		lst = lst->next;
		node->next = (t_list *)malloc(sizeof(t_list));
		if (!node->next)
		{
			ft_lstclear(&new_lst, (*del));
			return (NULL);
		}
		node = node->next;
		node->content = (*f)(lst->content);
		node->next = NULL;
	}
	return (new_lst);
}
