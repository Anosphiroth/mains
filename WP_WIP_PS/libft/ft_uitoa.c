/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaamonch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:06:08 by vaamonch          #+#    #+#             */
/*   Updated: 2024/11/27 15:06:10 by vaamonch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_udigits(long long n)
{
	size_t	nb_dgt;

	nb_dgt = 1;
	while (n >= 10)
	{
		nb_dgt++;
		n = n / 10;
	}
	return (nb_dgt);
}

static char	*ft_num_ufill(char *num, long long n, size_t len)
{
	num[len] = '\0';
	while (len > 0)
	{
		num[len - 1] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	return (num);
}

char	*ft_uitoa(unsigned int n)
{
	long long	ll_n;
	char		*num;
	size_t		len;

	ll_n = n;
	len = 0;
	len = len + ft_count_udigits(n);
	num = (char *)malloc((len + 1) * sizeof(char));
	if (!num)
		return (NULL);
	return (ft_num_ufill(num, ll_n, len));
}
