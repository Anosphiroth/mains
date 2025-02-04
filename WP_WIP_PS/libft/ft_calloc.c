/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaamonch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:15:14 by vaamonch          #+#    #+#             */
/*   Updated: 2024/11/15 18:45:59 by vaamonch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (size > SIZE_MAX / nmemb)
	{
		write(0, "Error: Overflow Detected\n", 25);
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, nmemb * size);
	return (p);
}
/*
#include <stdio.h>
int	main(int c, char *v[])
{
	int	*tab;
	size_t	i;

	if (c < 2)
		printf("Error: Incorrect Input\n");
	printf("\nnmemb: %d\n", atoi(v[1]));
	printf("size: %ld\n", sizeof(unsigned long int));
	if (v[2])
	{
		printf("Executing calloc(nmemb, size)\n");
		tab = (int *)calloc(atoi(v[1]), sizeof(int));
	}
	else
	{
		printf("Executing ft_calloc(nmemb, size)\n");
		tab = (int *)ft_calloc(atoi(v[1]), sizeof(int));
	}
	i = 0;
	while (i < atoi(v[1]) * sizeof(int))
	{
		printf("tab[%ld]: %d\n", i, tab[i]);
		i++;
	}
	if (tab != NULL)
		free(tab);
	return (0);
}
*/
