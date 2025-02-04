/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaamonch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 12:01:06 by vaamonch          #+#    #+#             */
/*   Updated: 2024/11/20 12:01:08 by vaamonch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/*
#include <stdio.h>
int	main(void)
{
	t_list	*lst;

	lst = ft_lstnew("1.plop");
	lst->next = ft_lstnew("2.plop");
	lst->next->next = ft_lstnew("3.plop");
	//
	printf("%s\n", (char *)ft_lstlast(lst)->content);
	return (0);
}
*/