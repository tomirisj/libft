/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhumaga <tzhumaga@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:23:08 by tzhumaga          #+#    #+#             */
/*   Updated: 2023/09/03 19:24:02 by tzhumaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>
// #include <string.h>

#include "libft.h"

// int ft_strlen(char *s)
// {
// 	int i;
// 	i = 0;
// 	while(s[i] != '\0')
// 	{
// 		i++;
// 	}
// 	return (i);
// }
	
char *ft_strrchr(const char *s, int c)
{
		
	int i;
	i = ft_strlen((char *)s);
	
    while (i >= 0)
    {
		i--;
        if (s[i] == c)
        {
            return &((char *)s)[i];
        }
    }
    return (0);
}

int main()
{
	const char *s = "Tomiris";
	int c = 'i';
	printf("%s", ft_strrchr (s,c));
	return (0);
}