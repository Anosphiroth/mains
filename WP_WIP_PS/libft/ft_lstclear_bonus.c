/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaamonch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:10:06 by vaamonch          #+#    #+#             */
/*   Updated: 2024/11/20 15:10:10 by vaamonch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;

	if (!(*lst))
		return ;
	while (*lst)
	{
		node = (*lst)->next;
		(*del)((*lst)->content);
		free(*lst);
		*lst = node;
	}
	*lst = NULL;
}
/*
void	del_c(void *content)
{
	content = NULL;
}
#include <stdio.h>
int	main(void)
{
	t_list	*lst1;
	t_list	*lst2;
	t_list	*lst3;

	lst1 = ft_lstnew("1.plop");
	lst2 = ft_lstnew("2.plop");
	lst3 = ft_lstnew("3.plop");
	lst1->next = lst2;
	lst2->next = lst3;
	//
	ft_lstclear(lst2, del_c);
	printf("%s\n", (char *)lst1->content);
	printf("%s\n", (char *)lst3->content);
	printf("%s\n", (char *)lst2->content);

	return (0);
}
*/