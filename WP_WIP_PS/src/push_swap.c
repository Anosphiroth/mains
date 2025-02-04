/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaamonch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 11:40:26 by vaamonch          #+#    #+#             */
/*   Updated: 2025/01/07 11:40:27 by vaamonch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_stack *a, t_stack *b, int size)
{
	if (!is_sorted(a, 0, size))
	{
		if (size > 5)
			sort_long_stack(&a, &b, size);
		else if (size == 5 || size == 4)
			sort_short5_stack(&a, &b, size);
		else if (size == 3)
			sort_short3_stack(&a);
		else if (size <= 2)
		{
			if (!is_sorted(a, 0, size))
				exec_print_swap(&a, 'a');
		}
		else
			return ;
	}
}

static int	valid_inputs(char *v[])
{
	int	i;
	int	j;

	i = 1;
	while (v[i])
	{
		j = 0;
		while (v[i][j])
		{
			if (v[i][j] < '0' || v[i][j] > '9')
				if (v[i][j] != '+' && v[i][j] != '-')
					return (0);
			if (v[i][j] >= '0' && v[i][j] <= '9' && (v[i][j + 1] < '0' || v[i][j
					+ 1] > '9') && v[i][j + 1] != '\0')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	free_stacks(t_stack *stack_a, t_stack *stack_b)
{
	free(stack_a);
	free(stack_b);
}

int	main(int c, char *v[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		*array;

	if (c < 2)
		return (1);
	if (!valid_inputs(v))
	{
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	stack_a = init_stack(c);
	stack_b = init_stack(c);
	stack_a = fill_stack(stack_a, c, v);
	array = dup_stack_in_array(stack_a, c - 1, stack_b);
	sort_array(array, c - 1);
	indexing_stack(&stack_a, array, c - 1);
	//stacks_index_display(stack_a, stack_b, c - 1);
	push_swap(stack_a, stack_b, c - 1);
	//stacks_index_display(stack_a, stack_b, c - 1);
	free_stacks(stack_a, stack_b);
	return (0);
}
