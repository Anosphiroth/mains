/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaamonch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 18:54:46 by vaamonch          #+#    #+#             */
/*   Updated: 2024/11/25 18:54:48 by vaamonch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_digits_hex(size_t n)
{
	size_t	nb_dgt;

	nb_dgt = 1;
	while (n >= 16)
	{
		nb_dgt++;
		n = n / 16;
	}
	return (nb_dgt);
}

static char	*ft_num_fill_hex(char *num, size_t n, size_t len, char *bse_hx)
{
	num[len] = '\0';
	while (len > 0)
	{
		num[len - 1] = bse_hx[n % 16];
		n = n / 16;
		len--;
	}
	return (num);
}

static char	*ft_num_fill_ptr(char *num, size_t n, size_t len, char *bse_hx)
{
	num[len] = '\0';
	while (len > 2)
	{
		num[len - 1] = bse_hx[n % 16];
		n = n / 16;
		len--;
	}
	num[0] = '0';
	num[1] = 'x';
	return (num);
}

char	*ft_itoa_hex(size_t n, int mod)
{
	char	*num;
	size_t	len;

	len = 0;
	len = len + ft_count_digits_hex(n);
	if (mod == 2)
		len = len + 2;
	num = (char *)malloc((len + 1) * sizeof(char));
	if (!num)
		return (NULL);
	if (mod == 2)
		return (ft_num_fill_ptr(num, n, len, "0123456789abcdef"));
	if (mod == 1)
		return (ft_num_fill_hex(num, n, len, "0123456789ABCDEF"));
	return (ft_num_fill_hex(num, n, len, "0123456789abcdef"));
}
