/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhumaga <tzhumaga@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:43:32 by tzhumaga          #+#    #+#             */
/*   Updated: 2023/08/22 15:16:55 by tzhumaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_strlcpy(char * dest, const char * src, size_t n)
{
    size_t i; 
    i = 0;
    while (i < n)
    {
        dest[i] = src[i];
        i++;
    }
}

// int main()
// {
//     char dest[] = "Hello ";
//     char src[] = "World";
//     printf("before function: %s \n", dest);
//     ft_strlcpy(dest, src, sizeof(dest));
//     printf("after function: %s \n", dest);
//     return (0);
// }