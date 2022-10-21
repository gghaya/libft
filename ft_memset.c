/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 22:24:41 by gghaya            #+#    #+#             */
/*   Updated: 2022/10/21 12:09:10 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	count;

	count = 0;
	// if (!s)
	// 	return (0);
	while (count < n)
	{
		*(char *)(s + count) = ( char )c ;
		count++;
	}
	return (s);
}
// int main ()
// {
// 	int arr[10] = {1, 2, 3, 4, 5, 6};
// 	int i = 0;
//     int t = 53;
//     ft_memset(arr, t,4);
//     for (i = 0; i < 6; i++)
//         printf("%d\t",arr[i]);
//     return 0;
// }
