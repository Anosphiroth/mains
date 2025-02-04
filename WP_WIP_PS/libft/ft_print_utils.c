/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaamonch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 19:19:19 by vaamonch          #+#    #+#             */
/*   Updated: 2024/11/25 19:19:21 by vaamonch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_print_char(char c)
{
	return (write(1, &c, 1));
}

int	ft_print_str(char *s)
{
	if (!s)
		return (write(1, "(null)", 6));
	else
		return (write(1, s, ft_strlen(s)));
}

static int	ft_print_int(int n)
{
	int		count;
	char	*tmp;

	tmp = NULL;
	tmp = ft_itoa(n);
	count = write(1, tmp, ft_strlen(tmp));
	free(tmp);
	return (count);
}

static int	ft_print_uint(unsigned int n)
{
	int		count;
	char	*tmp;

	tmp = NULL;
	tmp = ft_uitoa(n);
	count = write(1, tmp, ft_strlen(tmp));
	free(tmp);
	return (count);
}

int	ft_print_conv(char c, va_list args)
{
	int	count;

	count = 0;
	if (c == '%')
		count = ft_print_char('%');
	else if (c == 'c')
		count = ft_print_char((char)va_arg(args, int));
	else if (c == 's')
		count = ft_print_str((char *)va_arg(args, char *));
	else if (c == 'u')
		count = ft_print_uint((unsigned int)va_arg(args, unsigned int));
	else if (c == 'd' || c == 'i')
		count = ft_print_int((int)va_arg(args, int));
	else if (c == 'x' || c == 'X')
		count = ft_print_hex((unsigned int)va_arg(args, unsigned int), c);
	else if (c == 'p')
		count = ft_print_ptr((uintptr_t)va_arg(args, uintptr_t));
	return (count);
}
