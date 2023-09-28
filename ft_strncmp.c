/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhumaga <tzhumaga@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:02:30 by tzhumaga          #+#    #+#             */
/*   Updated: 2023/08/22 16:09:20 by tzhumaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>
// #include <string.h>

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				eqa;

	i = 0;
	eqa = 0;
	while ((s1[i] != '\0' && i < n) || (s2[i] != '\0' && i < n))
	{
		if (s1[i] > s2[i] || s1[i] < s2[i])
		{
			eqa = s1[i] - s2[i];
			return (eqa);
		}
		i++;
	}
	return (0);
}
// int main(void)
// {
// 	char	test[] = "Hello";
// 	char	str1[] = "Hello";
// 	char	str2[] = "Iel";
// 	char	str3[] = "Ae";
// 	printf("%d \n", strncmp(test, str1, 100));
// 	printf("%d \n", strncmp(test, str2, 100));
// 	printf("%d \n\n", strncmp(test, str3, 100));
// 	printf("%d \n", ft_strncmp(test, str1, 100));
// 	printf("%d \n", ft_strncmp(test, str2, 100));
// 	printf("%d \n", ft_strncmp(test, str3, 100));
// }