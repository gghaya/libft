/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 23:15:23 by gghaya            #+#    #+#             */
/*   Updated: 2022/10/21 12:09:12 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int searchedChar)
{
	int		i;
	char	c;

	c = (char)searchedChar;
	i = 0;
	while (string[i])
	{
		if ((char)string[i] == c)
			return ((char *)string + i);
		i++;
	}
	if(c == '\0')
		return ((char *)string + i);
	return (0);
}
// int main() {

//     const char * source = "The C\0Language";
//     int k=97;
//     int length = strlen( source );
// 	printf( "%s",ft_strchr( source,0) );
//     return 0;
// }
