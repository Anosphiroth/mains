/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaamonch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:08:09 by vaamonch          #+#    #+#             */
/*   Updated: 2024/11/26 13:14:27 by vaamonch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	li_n;

	li_n = n;
	if (li_n < 0)
	{
		li_n = -li_n;
		ft_putchar_fd('-', fd);
	}
	if (li_n >= 10)
		ft_putnbr_fd(li_n / 10, fd);
	ft_putchar_fd((li_n % 10) + '0', fd);
}
