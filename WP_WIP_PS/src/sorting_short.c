/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_short.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaamonch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 16:47:07 by vaamonch          #+#    #+#             */
/*   Updated: 2025/01/17 16:47:08 by vaamonch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_short3_stack(t_stack **stack)
{
	int	min_index;
	int	max_index;

	while (!is_sorted(*stack, 0, 3))
	{
		min_index = where_is_smallest_index(*stack, 3);
		max_index = where_is_biggest_index(*stack, 3);
		if ((min_index == 1 && max_index == 2) || (min_index == 0
				&& max_index == 1) || (is_sorted(*stack, 1, 3)))
			exec_print_swap(stack, 'a');
		else if (min_index == 1 && max_index == 0)
			exec_print_rotate(stack, 'a', 3);
		else if (min_index == 2 && max_index == 1)
			exec_print_reverse_rotate(stack, 'a', 3);
	}
}

static size_t	first_step_short5_stack(t_stack **a, t_stack **b,
		t_size size)
{
	t_stack	small;
	size_t	size_b;

	small = (*a)[where_is_smallest_index(*a, *size.size_a)];
	size_b = 0;
	size.size_b = &size_b;
	while ((*a)[0].srt_index != small.srt_index)
		exec_print_smart_rotate(a, 'a', small, *size.size_a);
	while (*size.size_a > 3)
		exec_print_push(a, b, 'b', size);
	sort_short3_stack(a);
	return (*size.size_b);
}

static void	insert_short_val(t_stack **a, t_stack **b, t_size size)
{
	int		index;
	t_stack	for_push;
	//size_t	tmp;

	index = find_bigger_index(*a, (*b)[0].srt_index, *size.size_a);
	for_push = (*a)[index];
	while ((*a)[0].srt_index != for_push.srt_index)
		exec_print_smart_rotate(a, 'a', for_push, *size.size_a);
	exec_print_push(a, b, 'a', size);
	ft_printf("[0]size.size_b: %d\n", (int)*size.size_b);
	//tmp = *size.size_b;
	while (!is_sorted(*a, 0, *size.size_a))
		exec_print_smart_rotate(a, 'a', (*a)[where_is_smallest_index(*a,
				*size.size_a)], *size.size_a);
	//size.size_b = &tmp;
	ft_printf("[1]size.size_b: %d\n", (int)*size.size_b);
	//stacks_index_display(*a, *b, *size.size_a);
}

void	sort_short5_stack(t_stack **a, t_stack **b, size_t size_a)
{
	t_size	size;
	int		small;
	int		big;
	size_t	tmp;

	size.size_a = &size_a;
	tmp = first_step_short5_stack(a, b, size);
	size.size_b = &tmp;
	while (*size.size_b > 0)
	{
		small = (*a)[where_is_smallest_index(*a, *size.size_a)].srt_index;
		big = (*a)[where_is_biggest_index(*a, *size.size_a)].srt_index;
		if ((*b)[0].srt_index < small || (*b)[0].srt_index > big)
		{
			exec_print_push(a, b, 'a', size);
			if ((*a)[0].srt_index > big)
				exec_print_rotate(a, 'a', *size.size_a);
		}
		else
			insert_short_val(a, b, size);
	}
}
