/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 22:12:32 by gghaya            #+#    #+#             */
/*   Updated: 2022/10/21 12:09:27 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *first, const char *second, size_t n)
{
	unsigned char	*f ;
	unsigned char	*s;
	size_t	i;

	f = (unsigned char *)first;
	s = (unsigned char *)second;
	i = 0;
	while ((f[i] || s[i]) && i < n)
	{
		if (f[i] != s[i])
			return ((unsigned char )f[i] - (unsigned char )s[i]);
		i++;
	}
	return (0);
}

// int main() {

//     const char * source = "12345";
//     const char * source1 = "12355";
// 	printf( "%d",strncmp( source,source1,4));
// 	printf( "\n%d",ft_strncmp( source,source1,4));
//     return 0;
// }
