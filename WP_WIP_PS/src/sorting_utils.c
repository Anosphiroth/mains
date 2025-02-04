/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaamonch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 16:44:46 by vaamonch          #+#    #+#             */
/*   Updated: 2025/01/17 16:44:47 by vaamonch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	find_smaller_index(t_stack *stack, int index, size_t size)
{
	size_t	i;
	int		ret;
	int		tmp;

	i = 0;
	ret = where_is_smallest_index(stack, size);
	tmp = stack[ret].srt_index;
	while (i < size)
	{
		if (stack[i].srt_index < index && stack[i].srt_index > tmp
			&& stack[i].srt_index > stack[where_is_smallest_index(stack,
					size)].srt_index)
		{
			tmp = stack[i].srt_index;
			ret = i;
		}
		i++;
	}
	return (ret);
}

size_t	find_bigger_index(t_stack *stack, int index, size_t size)
{
	size_t	i;
	int		ret;
	int		tmp;

	i = 0;
	ret = where_is_biggest_index(stack, size);
	tmp = stack[ret].srt_index;
	while (i < size)
	{
		if (stack[i].srt_index > index && stack[i].srt_index < tmp
			&& stack[i].srt_index < stack[where_is_biggest_index(stack,
					size)].srt_index)
		{
			tmp = stack[i].srt_index;
			ret = i;
		}
		i++;
	}
	return (ret);
}

size_t	where_is_smallest_index(t_stack *stack, size_t size)
{
	size_t	i;
	int		small;
	size_t	index;

	small = stack[0].srt_index;
	index = 0;
	i = 0;
	while (i < size)
	{
		if (stack[i].srt_index < small)
		{
			small = stack[i].srt_index;
			index = i;
		}
		i++;
	}
	return (index);
}

size_t	where_is_biggest_index(t_stack *stack, size_t size)
{
	size_t	i;
	int		big;
	size_t	index;

	big = stack[0].srt_index;
	index = 0;
	i = 0;
	while (i < size)
	{
		if (stack[i].srt_index > big)
		{
			big = stack[i].srt_index;
			index = i;
		}
		i++;
	}
	return (index);
}

int	find_index(t_stack *stack, int index, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if (stack[i].srt_index == index)
			return (i);
		i++;
	}
	return (-1);
}
