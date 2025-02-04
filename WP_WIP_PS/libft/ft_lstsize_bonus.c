/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaamonch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 11:17:53 by vaamonch          #+#    #+#             */
/*   Updated: 2024/11/20 11:17:59 by vaamonch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	size;

	size = 0;
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}
/*
#include <stdio.h>
int	main(void)
{
	t_list	*lst;
	int		size;

	lst = ft_lstnew("1.plop");
	lst->next = ft_lstnew("2.plop");
	lst->next->next = ft_lstnew("3.plop");
	//
	size = ft_lstsize(lst);
	printf("%d\n", size);
	return (0);
}
*/