/* ************************************************************************** */
/*											*/
/*								:::		::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*								+:+ +:+	      +:+     */
/*   By: vaamonch <marvin@42.fr>				+#+  +:+	   +#+	      */
/*							+#+#+#+#+#+	+#+		   */
/*   Created: 2024/11/04 14:36:16 by vaamonch			 #+#    #+#	      */
/*   Updated: 2024/11/15 11:53:29 by vaamonch         ###   ########.fr       */
/*											*/
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int			i;
	int			sign;
	long int	val;

	i = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	sign = 1;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -sign;
		i++;
	}
	val = 0;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		val = val * 10 + nptr[i] - 48;
		i++;
	}
	if (val * sign > INT_MAX || val * sign < INT_MIN)
		return (0);
	return (val * sign);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int c, char *v[])
{
	int	i;
	int	res;
	int	ft_res;

	if (c < 2)
		printf("Error: Incorrect Input\n");
	i = 1;
	while (v[i])
	{
		res = atoi(v[i]);
		ft_res = ft_atoi(v[i]);
		printf("atoi(%s): %d\n", v[i], res);
		printf("ft_atoi(%s): %d\n\n", v[i], ft_res);
		i++;
	}
	return (0);
}
*/
