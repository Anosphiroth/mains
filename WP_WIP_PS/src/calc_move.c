/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_move.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaamonch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 16:35:17 by vaamonch          #+#    #+#             */
/*   Updated: 2025/01/30 16:35:19 by vaamonch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	calc_move_b(t_stack **b, t_stack *elem, size_t size)
{
	size_t	tmp;

	if (elem->srt_index == (*b)[0].srt_index)
		return (0);
	else
	{
		tmp = find_index(*b, elem->srt_index, size);
		while (tmp % size != 0)
		{
			if (tmp < (size / 2))
			{
				elem->rb++;
				tmp--;
			}
			else
			{
				elem->rrb++;
				tmp++;
			}
		}
	}
	return (elem->rb + elem->rrb);
}

static int	calc_index(t_stack *stack, int index)
{
	size_t	i;

	i = 0;
	while (stack[i].srt_index)
	{
		if (stack[i].srt_index > index)
			return (stack[i].srt_index);
		i++;
	}
	return (-1);
}

static int	calc_move_a(t_stack **a, t_stack *elem, size_t size)
{
	int	tmp_index;

	if (elem->srt_index == 0)
		return (0);
	tmp_index = find_index(*a, calc_index(*a, elem->srt_index), size);
	if (tmp_index == -1 || elem->srt_index > (*a)[tmp_index].srt_index)
		tmp_index = where_is_biggest_index(*a, size);
	while (tmp_index % size != 0)
	{
		if (tmp_index > (int)(size / 2))
		{
			elem->rra++;
			tmp_index++;
		}
		else
		{
			elem->ra++;
			tmp_index--;
		}
	}
	return (elem->ra + elem->rra);
}

static void	reset_ops_count(t_stack *stack_elem)
{
	stack_elem->rb = 0;
	stack_elem->rrb = 0;
	stack_elem->ra = 0;
	stack_elem->rra = 0;
	stack_elem->ops = 0;
}

void	calc_move(t_stack **a, t_stack **b, size_t size_a, size_t size_b)
{
	size_t	i;

	i = 0;
	while ((*b)[i].value)
	{
		reset_ops_count(&(*b)[i]);
		(*b)[i].ops += calc_move_b(b, &(*b)[i], size_b);
		(*b)[i].ops += calc_move_a(a, &(*b)[i], size_a);
		i++;
	}
}
