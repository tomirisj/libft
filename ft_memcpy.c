/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhumaga <tzhumaga@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:45:44 by tzhumaga          #+#    #+#             */
/*   Updated: 2023/08/22 15:01:19 by tzhumaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *d = (unsigned char *)dest;
	unsigned char *s = (unsigned char *)src;
	size_t i;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return dest;
}

// int main()
// {
// 	char dest[] = ":3";
// 	char src[] = "Quiz";
// 	size_t size = sizeof(src) + 1;
// 	printf("before mine: %s \n", dest);
//  	ft_memcpy(dest, src, size);
// 	printf("after mine: %s \n", dest);
// 	return 0;
// }
