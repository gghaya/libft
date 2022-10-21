/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:50:30 by gghaya            #+#    #+#             */
/*   Updated: 2022/10/21 12:09:15 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;

	str = (char *)malloc(strlen(s1)+1);
	if(str == 0)
		return(0);
	ft_memcpy(str, s1, strlen(s1));
	str[strlen(s1)] = '\0';
	return (str);
}
