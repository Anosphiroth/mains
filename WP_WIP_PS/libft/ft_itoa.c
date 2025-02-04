/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaamonch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:33:45 by vaamonch          #+#    #+#             */
/*   Updated: 2024/11/19 14:30:43 by vaamonch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_digits(long int n)
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

static char	*ft_num_fill(char *num, long int n, int sign, size_t len)
{
	size_t	stop;

	stop = 0;
	if (sign < 0)
	{
		num[0] = '-';
		stop = 1;
	}
	num[len] = '\0';
	while (len > stop)
	{
		num[len - 1] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	return (num);
}

char	*ft_itoa(int n)
{
	long int	li_n;
	char		*num;
	size_t		len;
	int			sign;

	li_n = n;
	len = 0;
	sign = 1;
	if (li_n < 0)
	{
		li_n = -li_n;
		sign = -sign;
		len++;
	}
	len = len + ft_count_digits(li_n);
	num = (char *)malloc((len + 1) * sizeof(char));
	if (!num)
		return (NULL);
	return (ft_num_fill(num, li_n, sign, len));
}
/*
#include <stdio.h>

int	main(int c, char *v[])
{
	size_t	i;

	if (c < 2)
		printf("Error: Incorrect Input\n");
	i = 1;
	while (v[i])
	{
		printf("\nn: %d\n", atoi(v[i]));
		//printf("\nft_count_digits(n): ");
		//printf("%ld\n", ft_count_digits(atoi(v[i])));
		printf("ft_itoa(n):%s\n", ft_itoa(atoi(v[i])));
		i++;
	}
	return (0);
}
*/
