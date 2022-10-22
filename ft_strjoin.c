/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 22:50:29 by gghaya            #+#    #+#             */
/*   Updated: 2022/10/22 00:00:09 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*concat;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2);
	concat = (char *)malloc(len + 1);
	if (concat == NULL)
		return (NULL);
	ft_strlcat(concat, s1, len + 1);
	ft_strlcat(concat, s2, len + 1);
	return (concat);
}
// int main()
// {
// 	printf("%s",ft_strjoin("okokok"," lalala"));
// }
