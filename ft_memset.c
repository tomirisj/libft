/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhumaga <tzhumaga@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:46:13 by tzhumaga          #+#    #+#             */
/*   Updated: 2023/08/22 15:01:30 by tzhumaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_memset(void *str, int c, size_t n)
{
	unsigned char *s = (unsigned char *)str;
	size_t i;

	i = 0;
	while(i < n)
	{
		s[i] = (unsigned char) c; //tbh, I don't understand this line
		i++;
	}
}

// int main() 
// {
// 	int i; 
// 	i = 3;
//     char buffer[i];
//     ft_memset(buffer, 'A', i);
// 	printf("Mine: %s \n", buffer);
// 	int r; 
// 	r = 3;
//     char real[r];
// 	memset(real, 'A', r);
// 	printf("Real: %s", real);
//     return 0;
// }