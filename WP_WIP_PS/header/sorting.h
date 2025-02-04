/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaamonch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 16:33:31 by vaamonch          #+#    #+#             */
/*   Updated: 2025/01/30 16:33:35 by vaamonch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORTING_H
# define SORTING_H

# include "stack_func.h"

size_t	where_is_smallest_index(t_stack *stack, size_t size);
size_t	where_is_biggest_index(t_stack *stack, size_t size);
size_t	find_smaller_index(t_stack *stack, int index, size_t size);
size_t	find_bigger_index(t_stack *stack, int index, size_t size);

int		find_index(t_stack *stack, int index, size_t size);

void	sort_short3_stack(t_stack **stack);
void	sort_short5_stack(t_stack **a, t_stack **b, size_t size_a);
void	sort_long_stack(t_stack **a, t_stack **b, size_t size_a);

#endif
