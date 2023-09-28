/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhumaga <tzhumaga@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:43:45 by tzhumaga          #+#    #+#             */
/*   Updated: 2023/08/21 17:43:50 by tzhumaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t i)
{
	unsigned char *ptr = (unsigned char *)s;
	size_t n;
	n = 0;
	while(n < i)
	{
		ptr[n] = 0;
		n++;
	}
}

// int main()
// {
// 	int i;
// 	int n;
// 	i = 3;
// 	n = 0;
// 	char buffer[i];
// 	char realb[i];
// 	ft_bzero(buffer, sizeof(buffer));
// 	printf("Mine:\n ");
// 	while (n < i)
// 	{
// 		printf("%d", buffer[n]);
// 		n++;
// 	}
// 	printf ("\n");

// 	int c;
// 	c = 0;
// 	bzero(realb, sizeof(realb));
// 	printf("Real:\n ");
// 	while (c < i)
// 	{
// 		printf("%d", realb[c]);
// 		c++;
// 	}
// 	return 0;
// }