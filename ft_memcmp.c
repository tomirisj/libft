/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhumaga <tzhumaga@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:42:36 by tzhumaga          #+#    #+#             */
/*   Updated: 2023/08/22 19:06:48 by tzhumaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *src1 = (unsigned char *)s1;
    unsigned char *src2 = (unsigned char *)s2;
	size_t	i;
	int		eqa;

	i = 0;
	eqa = 0;
	while ((src1[i] != '\0' && i < n) || (src2[i] != '\0' && i < n))
	{
		if (src1[i] > src2[i] || src1[i] < src2[i])
		{
			eqa = src1[i] - src2[i];
			return (eqa);
		}
		i++;
	}
	return (0);
}

// int main()
// {
// 	const void *s1 = "Hello";
// 	const void *s2 = "yes";
// 	size_t n = strlen(s1);
// 	printf("%d", ft_memcmp(s1, s2, n));
// 	printf("%d", memcmp(s1, s2, n));
// 	return (0);
// }