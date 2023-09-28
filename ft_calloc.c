/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhumaga <tzhumaga@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:37:16 by tzhumaga          #+#    #+#             */
/*   Updated: 2023/09/14 20:07:10 by tzhumaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void * ft_calloc (size_t nmemb, size_t size)
{
	char	*buffer;
	int		area;

	area = (nmemb * size);
	buffer = (char *)malloc(sizeof(char) *area);
	if (!buffer)
		return (NULL);
	while (--area >= 0)
		buffer[area] = '\0';
	return ((void *)buffer);
}


// int main ()
// {
//     int i;
//     int n;
//     int *a;
//     printf("Number of elements to be entered:");
//     scanf("%d",&n);
//     a = (int*) ft_calloc(n, sizeof(int));
//     printf("Enter %d numbers:\n",n);
//     for( i = 0 ; i < n ; i++ ) {
//       scanf("%d",&a[i]);
//     }
//     printf("The numbers entered are: ");
//     for( i=0 ; i < n ; i++ ) {
//       printf("%d ",a[i]);
//     }
//     free( a );
//     return(0);
// }
