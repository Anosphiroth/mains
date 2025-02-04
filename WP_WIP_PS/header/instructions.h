/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaamonch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 16:33:16 by vaamonch          #+#    #+#             */
/*   Updated: 2025/01/30 16:33:19 by vaamonch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INSTRUCTIONS_H
# define INSTRUCTIONS_H

# include "libft.h"
# include "stack_func.h"

void	swap(t_stack **stack);
void	rotate(t_stack **stack, size_t size);
void	reverse_rotate(t_stack **stack, size_t size);
void	push(t_stack **stack_to, t_stack **stack_from, size_t **s_to,
			size_t **s_from);

void	double_swap(t_stack **stack_a, t_stack **stack_b);
void	double_rotate(t_stack **stack_a, t_stack **stack_b, size_t size_a,
			size_t size_b);
void	double_reverse_rotate(t_stack **stack_a, t_stack **stack_b,
			size_t size_a, size_t size_b);

void	exec_print_swap(t_stack **stack, char stack_name);
void	exec_print_rotate(t_stack **stack, char stack_name, size_t size);
void	exec_print_reverse_rotate(t_stack **stack, char stack_name,
			size_t size);
void	exec_print_smart_rotate(t_stack **stack, char stack_name, t_stack elem,
			size_t size);
void	exec_print_push(t_stack **a, t_stack **b, char stack_name,
			t_size	size);

#endif
