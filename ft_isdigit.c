/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 19:34:51 by gghaya            #+#    #+#             */
/*   Updated: 2022/10/21 12:08:48 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int x)
{
	if (x >= 48 && x <= 57)
		return (1);
	return (0);
}

// int main()
// {
//     int c;
//     c = 2;
//     printf("\nResult when uppercase alphabet is passed: %d", ft_isdigit(c));

//     c =  56;
//     printf("\nResult when lowercase alphabet is passed: %d", ft_isdigit(c));

//     c='+';
//printf("\nResult when non-alphabetic character is passed: %d", ft_isdigit(c));
//     return 0;
// }
