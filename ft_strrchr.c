/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 23:51:52 by gghaya            #+#    #+#             */
/*   Updated: 2022/10/21 12:09:35 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int searchedChar)
{
	char	*str;
	char	Ch;
	int		i;

	str = (char *)string;
	Ch = (char)searchedChar;
	i = ft_strlen(string);
	while (i >= 0)
	{
		if (str[i] == Ch)
			return (str + i);
		i--;
	}
	return (0);
}
// int main() {

//     const char * source = "The C Language";
//     int k=97;
//     int length = strlen( source );
// 	printf( "%s", ft_strrchr( source, k) );
//     return 0;
// }
