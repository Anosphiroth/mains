/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaamonch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:30:51 by vaamonch          #+#    #+#             */
/*   Updated: 2024/11/15 14:18:35 by vaamonch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new_s;
	size_t	len_s;
	size_t	i;

	len_s = 0;
	while (s[len_s])
		len_s++;
	new_s = (char *)malloc(sizeof(char) * (len_s + 1));
	if (new_s == NULL)
		return (NULL);
	i = 0;
	while (i < len_s)
	{
		new_s[i] = s[i];
		i++;
	}
	new_s[i] = 0;
	return (new_s);
}
/*
#include <stdio.h>
#include <string.h>
int	main(int c, char *v[])
{
	char	*new_s;
	if (c < 2)
		printf("Error: Incorrect Input\n");
	printf("\ns:%s\n", v[1]);
	if (v[2])
	{
		printf("Executing strdup(s)\n");
		new_s = strdup(v[1]);
	}
	else
	{
		printf("Executing ft_strdup(s)\n");
		new_s = ft_strdup(v[1]);
	}
	printf("new_s:%s\n", new_s);
	if (new_s != NULL)
		free(new_s);
	return (0);
}
*/
