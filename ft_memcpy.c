/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:36:24 by gghaya            #+#    #+#             */
/*   Updated: 2022/10/21 12:16:54 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dstt;
	unsigned char	*srcc;
	size_t			i;

	dstt = (unsigned char *)dst;
	srcc = (unsigned char *)src;
	i = 0;
	if (dst != 0 || src != 0)
	{
		while (i < n)
		{
		dstt[i] = srcc[i];
		i++;
		}
		return (dstt);
	}
	return (0);
}

// int main ()
// {
// 	// int s[] = {1,2,3,4,8};
// 	// int n[] = {2,4,1,8};
// 	// int i = 0;

// 	// ft_memcpy(s, n, sizeof(int) * 3);
// 	// for(i=0;i<5;i++)
// 	// {
// 	// 	printf("%d",(int)s[i]);
// 	// }

// 	char a[9] = "Abdellah";
// 	char b[9];
// 	ft_memcpy(b,NULL,NULL);
// 	printf("%s\n",b);

// }
