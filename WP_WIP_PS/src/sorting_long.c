/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_long.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaamonch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:24:20 by vaamonch          #+#    #+#             */
/*   Updated: 2025/01/21 18:24:22 by vaamonch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	find_best_elem(t_stack *stack, size_t size)
{
	t_stack	best;
	size_t	i;

	best = stack[0];
	i = 0;
	while (i < size)
	{
		if (stack[i].ops < best.ops)
			best = stack[i];
		i++;
	}
	return (best);
}

static void	insert_long_val(t_stack **a, t_stack **b, t_size size)
{
	int		index;
	t_stack	for_push;

	index = find_bigger_index(*a, (*b)[0].srt_index, *size.size_a);
	for_push = (*a)[index];
	while ((*a)[0].srt_index != for_push.srt_index)
		exec_print_smart_rotate(a, 'a', for_push, *size.size_a);
	exec_print_push(a, b, 'a', size);
	if ((*a)[0].srt_index > (*a)[1].srt_index)
		exec_print_swap(a, 'a');
	while ((*b)[0].srt_index > 0 && (*b)[0].srt_index == (*a)[0].srt_index - 1)
		exec_print_push(a, b, 'a', size);
}

static size_t	ft_sqrt(int num)
{
	int	i;

	i = 0;
	while (i * i < num)
		i++;
	return (i);
}

static size_t	*presort(t_stack **a, t_stack **b, t_size size)
{
	int		sqrt;
	int		i;
	int		j;
	size_t	size_b;

	sqrt = ft_sqrt(*size.size_a);
	i = *size.size_a;
	j = 0;
	size_b = 0;
	while (*size.size_a > 3)
	{
		if ((*a)[0].srt_index > i - sqrt && (*a)[0].srt_index < (int)(*size.size_a)
			- 3)
		{
			exec_print_push(a, b, 'b', size);
			i--;
		}
		else if ((*a)[0].srt_index < j + sqrt)
		{
			exec_print_push(a, b, 'b', size);
			if (size_b > 1)
				exec_print_rotate(b, 'b', size_b);
			j++;
		}
		else
			exec_print_rotate(a, 'a', *size.size_a);
	}
	return (size.size_b);
}

void	sort_long_stack(t_stack **a, t_stack **b, size_t size_a)
{
	t_size	size;
	t_stack	best;

	size.size_a = &size_a;
	size.size_b = presort(a, b, size);
	sort_short3_stack(a);
	while (size.size_b > 0)
	{
		calc_move(a, b, *size.size_a, *size.size_b);
		best = find_best_elem(*b, *size.size_b);
		while ((*b)[0].srt_index != best.srt_index)
			exec_print_smart_rotate(b, 'b', best, *size.size_b);
		insert_long_val(a, b, size);
	}
	while (!is_sorted(*a, 0, *size.size_a))
		exec_print_smart_rotate(a, 'a', (*a)[where_is_smallest_index(*a,
				*size.size_a)], *size.size_a);
}
