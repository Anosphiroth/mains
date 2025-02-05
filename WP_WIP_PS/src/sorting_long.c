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

static t_stack	find_best_elem(t_stack *stack, size_t size)
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

static void	insert_long_val(t_stack **a, t_stack **b, t_stk_size size)
{
	int		index;
	t_stack	for_push;

	index = find_bigger_index(*a, (*b)[0].srt_indx, *size.s_a);
	for_push = (*a)[index];
	while ((*a)[0].srt_indx != for_push.srt_indx)
		exec_print_smart_rotate(a, 'a', for_push, *size.s_a);
	exec_print_push(a, b, 'a', size);
	if ((*a)[0].srt_indx > (*a)[1].srt_indx)
		exec_print_swap(a, 'a');
	while ((*b)[0].srt_indx > 0 && (*b)[0].srt_indx == (*a)[0].srt_indx - 1)
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

static size_t	presort(t_stack **a, t_stack **b, t_stk_size size)
{
	t_presort_arg	arg;
	size_t	size_b;

	arg = (t_presort_arg){.sqrt = ft_sqrt(*size.s_a), .i = *size.s_a, .j = 0};
	size_b = 0;
	size.s_b = &size_b;
	while (*size.s_a > 3)
	{
		if ((*a)[0].srt_indx > arg.i - arg.sqrt && (*a)[0].srt_indx < (int)(*size.s_a) - 3)
		{
			exec_print_push(a, b, 'b', size);
			arg.i--;
		}
		else if ((*a)[0].srt_indx < arg.j + arg.sqrt)
		{
			exec_print_push(a, b, 'b', size);
			if (*size.s_b > 1)
				exec_print_rotate(b, 'b', *size.s_b);
			arg.j++;
		}
		else
			exec_print_rotate(a, 'a', *size.s_a);
	}
	return (*size.s_b);
}

void	sort_long_stack(t_stack **a, t_stack **b, size_t size_a)
{
	t_stk_size	size;
	t_stack	best;
	size_t	tmp;

	size.s_a = &size_a;
	tmp = presort(a, b, size);
	size.s_b = &tmp;
	sort_short3_stack(a);
	while (*size.s_b > 0)
	{
		calc_move(a, b, *size.s_a, *size.s_b);
		best = find_best_elem(*b, *size.s_b);
		while ((*b)[0].srt_indx != best.srt_indx)
			exec_print_smart_rotate(b, 'b', best, *size.s_b);
		insert_long_val(a, b, size);
	}
	while (!is_sorted(*a, 0, *size.s_a))
		exec_print_smart_rotate(a, 'a', (*a)[where_is_smallest_index(*a,
				*size.s_a)], *size.s_a);
}
