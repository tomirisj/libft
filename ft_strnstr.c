/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhumaga <tzhumaga@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 19:10:28 by tzhumaga          #+#    #+#             */
/*   Updated: 2023/09/28 20:26:29 by tzhumaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <bsd/string.h>
#include <stdio.h>

char *strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	i = 0;
	int n;
	n = 0;
	while (big[i] != '\0' && )
	{
		i++;
	}
	
	
	if (ft_strlen(&big[i]) != &little[n])
	{
		return (0);
	}
	if (big[i] == little[i])
	{
		return (&little[i]);
	}
}


// int main()
// {
// 	const char *largestring = "Foo Bar Baz";
// 	const char *smallstring = "Bar";
// 	char *results = ft_strnstr(largestring, smallstring, 4);
// 	if (results != NULL)
// 	{
// 		printf("here are the results: %s", results);
// 	}
// 	return(0);
// }