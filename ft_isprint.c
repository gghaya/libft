/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 20:21:16 by gghaya            #+#    #+#             */
/*   Updated: 2022/10/21 12:08:52 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

// int main()
// {
//     char c;

//     c = 'Q';
//printf("Result when a printable character
// %c is passed to isprint(): %d", c, ft_isprint(c));

//     c = '\n';
//printf("\nResult when a control character %c is
//passed to isprint(): %d", c, ft_isprint(c));

//     return 0;
// }
