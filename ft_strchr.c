/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhumaga <tzhumaga@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:49:32 by tzhumaga          #+#    #+#             */
/*   Updated: 2023/09/14 18:32:43 by tzhumaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

char *ft_strchr(const char *s, int c)
{
    int i;
    i = 0;
	if (c == 0)
	{
		return (0);
	}
	
    while (s[i] != '\0')
    {
        if (s[i] == c)
        {
            return &((char *)s)[i];
        }
    i++;
    }
    return (0);
}

// int main()
// {
//     const char *str = "Hello";
//     int c = '0';
//     //const char *results = strchr(str, c) == str + strlen(str);
//     printf("results: %d \n", (ft_strchr(str, c) == str + strlen(str)));
//     return (0);
// }