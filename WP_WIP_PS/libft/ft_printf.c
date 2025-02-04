/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaamonch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 18:54:25 by vaamonch          #+#    #+#             */
/*   Updated: 2024/11/25 18:54:27 by vaamonch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_in_set(char c, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static int	*ft_write_check(int tmp, int *count)
{
	if (tmp == -1)
	{
		*count = -1;
		return (count);
	}
	*count += tmp;
	return (count);
}

static int	*ft_varg_count(const char *format, va_list args, int *count)
{
	int	tmp;

	tmp = 0;
	while (format && *format)
	{
		if (*count == -1 || (*format == '%' && !(*(format + 1))))
		{
			*count = -1;
			return (count);
		}
		else if (*format == '%' && ft_in_set(*(format + 1), "cspdiuxX%"))
		{
			tmp = ft_print_conv(*(format + 1), args);
			ft_write_check(tmp, &(*count));
			format++;
		}
		else
		{
			tmp = write(1, &(*format), 1);
			ft_write_check(tmp, &(*count));
		}
		format++;
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	if (!format)
		return (-1);
	va_start(args, format);
	count = 0;
	ft_varg_count(format, args, &count);
	va_end(args);
	return (count);
}
