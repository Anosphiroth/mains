/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_printing.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaamonch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 19:20:35 by vaamonch          #+#    #+#             */
/*   Updated: 2025/01/14 19:20:36 by vaamonch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	exec_print_swap(t_stack **stack, char stack_name)
{
	if (stack_name == 'a')
		ft_printf("sa\n");
	else if (stack_name == 'b')
		ft_printf("sb\n");
	swap(stack);
}

void	exec_print_rotate(t_stack **stack, char stack_name, size_t size)
{
	if (stack_name == 'a')
		ft_printf("ra\n");
	else if (stack_name == 'b')
		ft_printf("rb\n");
	rotate(stack, size);
}

void	exec_print_reverse_rotate(t_stack **stack, char stack_name, size_t size)
{
	if (stack_name == 'a')
		ft_printf("rra\n");
	else if (stack_name == 'b')
		ft_printf("rrb\n");
	reverse_rotate(stack, size);
}

void	exec_print_smart_rotate(t_stack **stack, char stack_name, t_stack elem,
		size_t size)
{
	int	index;

	index = find_index(*stack, elem.srt_indx, size);
	if (index > (int)size / 2)
		exec_print_reverse_rotate(stack, stack_name, size);
	else
		exec_print_rotate(stack, stack_name, size);
}

void	exec_print_push(t_stack **a, t_stack **b, char stack_name, t_stk_size size)
{
	if (stack_name == 'a')
	{
		ft_printf("pa\n");
		push(a, b, &size.s_a, &size.s_b);
	}
	else if (stack_name == 'b')
	{
		ft_printf("pb\n");
		push(b, a, &size.s_b, &size.s_a);
	}
}
