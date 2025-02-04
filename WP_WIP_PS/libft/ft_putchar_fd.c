/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaamonch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 14:49:45 by vaamonch          #+#    #+#             */
/*   Updated: 2024/11/15 15:03:18 by vaamonch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
#include <stdio.h>
int	main (int c, char *v[])
{
	int	i;

	if (c < 2)
		printf("Error: Incorrect Input\n");
	i = 0;
	while (v[1][i])
	{
		ft_putchar_fd(v[1][i], 1);
		printf("\n");
		i++;
	}
	return (0);
}
*/
