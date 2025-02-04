/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_instructions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaamonch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 11:40:02 by vaamonch          #+#    #+#             */
/*   Updated: 2025/01/07 11:40:03 by vaamonch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	double_swap(t_stack **stack_a, t_stack **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	ft_printf("ss\n");
}

void	double_rotate(t_stack **stack_a, t_stack **stack_b, size_t size_a,
		size_t size_b)
{
	rotate(stack_a, size_a);
	rotate(stack_b, size_b);
	ft_printf("rr\n");
}

void	double_reverse_rotate(t_stack **stack_a, t_stack **stack_b,
		size_t size_a, size_t size_b)
{
	reverse_rotate(stack_a, size_a);
	reverse_rotate(stack_b, size_b);
	ft_printf("rrr\n");
}
