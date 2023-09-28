/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhumaga <tzhumaga@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:45:24 by tzhumaga          #+#    #+#             */
/*   Updated: 2023/08/22 15:15:33 by tzhumaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return(1);
	}
	return (0);
}

// int main ()
// {
// 	ft_isdigit('7');
// 	return (0);
// }