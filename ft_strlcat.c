/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 21:11:11 by gghaya            #+#    #+#             */
/*   Updated: 2022/10/21 12:14:31 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dstlen;

	if (!dst && !dstsize)
		return (ft_strlen(src));
	if (dstsize <= ft_strlen(dst))
		return (ft_strlen(src) + dstsize);
	i = 0;
	dstlen = ft_strlen(dst);
	while (src[i] != '\0' && dstlen + 1 < dstsize)
	{
		dst[dstlen++] = src[i++];
	}
	dst[dstlen] = '\0';
	return (ft_strlen(dst)+ ft_strlen(&src[i]));
}
// int main ()
// {
// 	char a[] = "HiHi";
// 	char b[] = "Abdellah";
// 	int i;
// 	ft_strlcat(a,b,8);
// 	printf("%s\n",a);
// 	printf("%d\t%d",strlen(a),strlen(b));
// 	ft_strlcat(a,b,8);
// 	printf("%s\n",a);
// }
// int main()
// {
// 	printf("%lu",strlcat(((void *)0),"nyan !", 0));
// 	//printf("%lu\n",ft_strlcat(((void *)0),"nyan !", 0));
// }
