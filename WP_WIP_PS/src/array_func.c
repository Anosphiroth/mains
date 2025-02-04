/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_func.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaamonch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 16:35:05 by vaamonch          #+#    #+#             */
/*   Updated: 2025/01/30 16:35:08 by vaamonch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*dup_stack_in_array(t_stack *stack_a, size_t size, t_stack *stack_b)
{
	int		*array;
	size_t	i;

	array = malloc(sizeof(int) * size + 1);
	if (!array)
	{
		ft_putstr_fd("Error\n", 2);
		free_stacks(stack_a, stack_b);
		exit(EXIT_FAILURE);
	}
	i = 0;
	while (i < size)
	{
		array[i] = stack_a[i].value;
		i++;
	}
	return (array);
}

void	sort_array(int *array, size_t size)
{
	size_t	i;
	size_t	j;
	int		tmp;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (array[i] > array[j])
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
			}
			j++;
		}
		i++;
	}
}
