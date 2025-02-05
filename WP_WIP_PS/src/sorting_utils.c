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
	tmp = stack[ret].srt_indx;
	while (i < size)
	{
		if (stack[i].srt_indx < index && stack[i].srt_indx > tmp
			&& stack[i].srt_indx > stack[where_is_smallest_index(stack,
					size)].srt_indx)
		{
			tmp = stack[i].srt_indx;
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
	tmp = stack[ret].srt_indx;
	while (i < size)
	{
		if (stack[i].srt_indx > index && stack[i].srt_indx < tmp
			&& stack[i].srt_indx < stack[where_is_biggest_index(stack,
					size)].srt_indx)
		{
			tmp = stack[i].srt_indx;
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

	small = stack[0].srt_indx;
	index = 0;
	i = 0;
	while (i < size)
	{
		if (stack[i].srt_indx < small)
		{
			small = stack[i].srt_indx;
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

	big = stack[0].srt_indx;
	index = 0;
	i = 0;
	while (i < size)
	{
		if (stack[i].srt_indx > big)
		{
			big = stack[i].srt_indx;
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
		if (stack[i].srt_indx == index)
			return (i);
		i++;
	}
	return (-1);
}
