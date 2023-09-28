/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhumaga <tzhumaga@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:46:59 by tzhumaga          #+#    #+#             */
/*   Updated: 2023/08/22 15:16:27 by tzhumaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_strlcat (char *dest, const char *src, size_t n)
{
    // unsigned char *d = (unsigned char *)dest;
    // unsigned char *s = (unsigned char *)src;
    size_t i;
    int j;
    i = 0;
    j = 0;
    while ( dest[i] != '\0')
    {
        i++;
    }
    while (i < n)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
}

// int main()
// {
//     char dest[20] = "Hello ";
//     char src[] = "World";
//     printf("before: %s \n", dest);
//     ft_strlcat(dest, src, sizeof(dest));
//     printf("after: %s \n", dest);
//     return (0);
// }
