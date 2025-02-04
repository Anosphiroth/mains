/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: vaamonch <marvin@42.fr>		    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/11/04 14:02:36 by vaamonch	       #+#    #+#	      */
/*   Updated: 2024/11/04 14:03:54 by vaamonch         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(int c, char *v[])
{
	int	i;
	int	res;

	if (c < 2)
		printf("Error: Incorrect Input\n");
	i = 1;
	while (v[i])
	{
		res = ft_isprint(atoi(v[i]));
		printf("ft_isprint(%d): %d\n", atoi(v[i]), res);
		i++;
	}
	return (0);
}
*/
