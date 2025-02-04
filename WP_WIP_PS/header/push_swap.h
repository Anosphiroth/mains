/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaamonch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 11:40:40 by vaamonch          #+#    #+#             */
/*   Updated: 2025/01/07 11:40:42 by vaamonch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "instructions.h"
# include "sorting.h"
# include "stack_func.h"

void	push_swap(t_stack *a, t_stack *b, int size);

int		*dup_stack_in_array(t_stack *stack_a, size_t size, t_stack *stack_b);
void	sort_array(int *array, size_t size);

void	calc_move(t_stack **a, t_stack **b, size_t size_a, size_t size_b);

void	free_stacks(t_stack *stack_a, t_stack *stack_b);

#endif
