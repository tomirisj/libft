/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhumaga <tzhumaga@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:48:47 by tzhumaga          #+#    #+#             */
/*   Updated: 2023/09/03 19:52:18 by tzhumaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_tolower (int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        c = c + 32;
        return (c);
    }
    return (c);
}

// int main ()
// {
//     unsigned char up;
//     up = 'Z';
//     printf("before: %c \n", up);
//     unsigned char low;
//     low = ft_tolower(up);
//     printf("before: %c \n", low);
//     return (0);
// }