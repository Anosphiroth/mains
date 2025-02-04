/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: vaamonch <marvin@42.fr>		    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/11/04 13:43:17 by vaamonch	       #+#    #+#	      */
/*   Updated: 2024/11/04 13:56:25 by vaamonch         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
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
		res = ft_isalpha(atoi(v[i]));
		printf("ft_isalpha(%d): %d\n", atoi(v[i]), res);
		i++;
	}	
	return (0);
}
*/
