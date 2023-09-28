/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhumaga <tzhumaga@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:47:45 by tzhumaga          #+#    #+#             */
/*   Updated: 2023/09/03 19:51:46 by tzhumaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//is it supposed to be int or unsigned char in the brackets?

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
    {
        c = c - 32;
        return (c);
    }
    return (c);
}

// int main()
// {
//     unsigned char low;
//     low = 'z';
//     printf("before: %c \n", low);
//     low = ft_toupper(low);
//     printf("after: %c \n", low);
//     return (0);
// }