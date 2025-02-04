/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaamonch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 11:40:14 by vaamonch          #+#    #+#             */
/*   Updated: 2025/01/07 11:40:15 by vaamonch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **stack)
{
	t_stack	tmp;

	tmp = (*stack)[0];
	(*stack)[0] = (*stack)[1];
	(*stack)[1] = tmp;
}

void	rotate(t_stack **stack, size_t size)
{
	t_stack	tmp;
	size_t	i;

	tmp = (*stack)[0];
	i = 0;
	while (i < size - 1)
	{
		(*stack)[i] = (*stack)[i + 1];
		i++;
	}
	(*stack)[i] = tmp;
}

void	reverse_rotate(t_stack **stack, size_t size)
{
	t_stack	tmp;
	size_t	i;

	tmp = (*stack)[size - 1];
	i = size - 1;
	while (i > 0)
	{
		(*stack)[i] = (*stack)[i - 1];
		i--;
	}
	(*stack)[0] = tmp;
}

void	push(t_stack **stack_to, t_stack **stack_from, size_t **s_to,
		size_t **s_from)
{
	size_t	i;

	(**s_to)++;
	i = **s_to;
	while (i > 0)
	{
		(*stack_to)[i] = (*stack_to)[i - 1];
		i--;
	}
	(*stack_to)[0] = (*stack_from)[0];
	i = 0;
	while (i + 1 < **s_from)
	{
		(*stack_from)[i] = (*stack_from)[i + 1];
		i++;
	}
	(*stack_from)[i] = (t_stack){.value = 0, .srt_index = -1};
	(**s_from)--;
}
