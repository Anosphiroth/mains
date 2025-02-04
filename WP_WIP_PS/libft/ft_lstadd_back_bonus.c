/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaamonch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 12:13:08 by vaamonch          #+#    #+#             */
/*   Updated: 2024/11/20 12:13:10 by vaamonch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	if (!new)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		node = ft_lstlast(*lst);
		node->next = new;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	t_list	*lst;
	t_list	*new;

	lst = ft_lstnew("1.plop");
	lst->next = ft_lstnew("2.plop");
	lst->next->next = ft_lstnew("3.plop");
	//
	new = ft_lstnew("plop");
	ft_lstadd_back(&lst, new);
	printf("%s\n", (char *)ft_lstlast(lst)->content);
	return (0);
}
*/