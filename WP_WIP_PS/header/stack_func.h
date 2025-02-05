/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_func.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaamonch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 16:33:54 by vaamonch          #+#    #+#             */
/*   Updated: 2025/01/30 16:33:56 by vaamonch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_FUNC_H
# define STACK_FUNC_H

# include <stdlib.h>

typedef struct s_stack
{
	int		value;
	int		srt_indx;
	int		ops;
	int		ra;
	int		rb;
	int		rra;
	int		rrb;
}			t_stack;

typedef struct s_stack_size
{
	size_t	*s_a;
	size_t	*s_b;
}			t_stk_size;

t_stack		*init_stack(size_t size);
t_stack		*fill_stack(t_stack *stack_a, size_t size, char **v);
void		indexing_stack(t_stack **stack, int *sorted_array, size_t size);

int			is_sorted(t_stack *stack, int act, size_t size);

void		stacks_index_display(t_stack *a, t_stack *b, size_t size);
void		stacks_value_display(t_stack *a, t_stack *b, size_t size);

#endif
