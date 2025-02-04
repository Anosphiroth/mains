/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_func.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaamonch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 12:10:51 by vaamonch          #+#    #+#             */
/*   Updated: 2025/01/07 12:10:53 by vaamonch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stacks_index_display(t_stack *a, t_stack *b, size_t size)
{
	size_t	i;

	i = 0;
	ft_printf("a\t\tb\n-\t\t-\n");
	while (i < size)
	{
		ft_printf("%d\t\t%d\n", (int)a[i].srt_index, (int)b[i].srt_index);
		i++;
	}
	ft_printf("-\t\t-\n");
}

void	stacks_value_display(t_stack *a, t_stack *b, size_t size)
{
	size_t	i;

	i = 0;
	ft_printf("a\t\tb\n-\t\t-\n");
	while (i < size)
	{
		ft_printf("%d\t\t%d\n", (int)a[i].value, (int)b[i].value);
		i++;
	}
	ft_printf("-\t\t-\n");
}

int	is_sorted(t_stack *stack, int act, size_t size)
{
	size_t	i;

	i = 0;
	if (act == 0)
	{
		while (i + 1 < size)
		{
			if (stack[i].srt_index > stack[i + 1].srt_index)
				return (0);
			i++;
		}
	}
	else
	{
		while (i + 1 < size)
		{
			if (stack[i].srt_index < stack[i + 1].srt_index)
				return (0);
			i++;
		}
	}
	return (1);
}
