/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhumaga <tzhumaga@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:12:25 by tzhumaga          #+#    #+#             */
/*   Updated: 2023/08/22 18:41:43 by tzhumaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    i = 0;
	unsigned char *src = (unsigned char *)s;
    while (i< n)
    {
        if (src[i] == c)
        {
            return &((char *)s)[i];
        }
    i++;
    }
    return (0);
}

// int main()
// {
// 	const void *s = "Hello";
// 	int c = 'e';
// 	size_t n = strlen(s);
// 	char *result = ft_memchr(s, c, n);
// 	printf ("%s",result);
// 	return (0);
// }
