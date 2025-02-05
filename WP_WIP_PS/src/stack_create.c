/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_create.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaamonch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 14:16:59 by vaamonch          #+#    #+#             */
/*   Updated: 2025/01/16 14:17:01 by vaamonch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*init_stack(size_t size)
{
	t_stack	*stack;
	size_t	i;

	stack = malloc(sizeof(t_stack) * size);
	if (!stack)
	{
		ft_putstr_fd("Error\n", 2);
		exit(EXIT_FAILURE);
	}
	i = 0;
	while (i < size)
	{
		stack[i].value = 0;
		stack[i].srt_indx = -1;
		i++;
	}
	return (stack);
}

t_stack	*fill_stack(t_stack *stack_a, size_t size, char **v)
{
	size_t	i;
	int		tmp;

	i = 0;
	while (i < size - 1)
	{
		tmp = ft_atoi(v[i + 1]);
		stack_a[i].value = tmp;
		i++;
	}
	return (stack_a);
}

void	indexing_stack(t_stack **stack, int *sorted_array, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if ((*stack)[j].value == sorted_array[i])
			{
				(*stack)[j].srt_indx = i;
				break ;
			}
			j++;
		}
		i++;
	}
	free(sorted_array);
}
