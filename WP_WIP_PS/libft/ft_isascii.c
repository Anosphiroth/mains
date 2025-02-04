/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaamonch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:57:36 by vaamonch          #+#    #+#             */
/*   Updated: 2024/11/04 14:01:04 by vaamonch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*
#include <stdio.h>
#include <stdlib.h>

int     main(int c, char *v[])
{
        int     i;
        int     res;

        if (c < 2)
                printf("Error: Incorrect Input\n");
        i = 1;
        while (v[i])
        {
                res = ft_isascii(atoi(v[i]));
                printf("ft_isascii(%d): %d\n", atoi(v[i]), res);
                i++;
        }
        return (0);
}
*/
