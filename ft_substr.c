/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhumaga <tzhumaga@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:26:10 by tzhumaga          #+#    #+#             */
/*   Updated: 2023/09/28 18:02:31 by tzhumaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"
// #include <string.h>
// #include <stdlib.h>
// #include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	if (s == NULL)
	{
		return (0);
	}

	int i;
    i = 0;
	const char *c;
	while (c[i] != '\0' && c[i] != start)
	{
		i++;
		return (0);
	}
	
    if (c[i] == start)
    {
        while (i <= len)
        {
            i++;
            return (c[i]);
        }
    }
        i++;
    return (0);
}