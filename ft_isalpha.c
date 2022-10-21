/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 19:18:01 by gghaya            #+#    #+#             */
/*   Updated: 2022/10/21 12:11:35 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int ch)
{
	if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
		return (1);
	return (0);
}
// int main()
// {
//     int c;
//     c = 'Q';
//     printf("\nResult when uppercase alphabet is passed: %d", ft_isalpha(c));

//     c = 'q';
//     printf("\nResult when lowercase alphabet is passed: %d", ft_isalpha(c));

//     c='+';
//printf("\nResult when non-alphabetic character is passed: %d", ft_isalpha(c));
//     return 0;
// }
