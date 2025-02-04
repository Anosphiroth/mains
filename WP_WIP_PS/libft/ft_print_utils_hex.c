/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_utils_2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaamonch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:22:19 by vaamonch          #+#    #+#             */
/*   Updated: 2024/11/27 15:22:21 by vaamonch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_hex(unsigned int hex, char c)
{
	int		count;
	char	*tmp;

	tmp = NULL;
	if (c == 'x')
		tmp = ft_itoa_hex(hex, 0);
	else if (c == 'X')
		tmp = ft_itoa_hex(hex, 1);
	count = write(1, tmp, ft_strlen(tmp));
	free(tmp);
	return (count);
}

int	ft_print_ptr(uintptr_t ptr)
{
	int		count;
	char	*tmp;

	tmp = NULL;
	if (!ptr)
		return (write(1, "(nil)", 5));
	else
		tmp = ft_itoa_hex(ptr, 2);
	count = write(1, tmp, ft_strlen(tmp));
	free(tmp);
	return (count);
}
