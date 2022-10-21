/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 22:22:17 by gghaya            #+#    #+#             */
/*   Updated: 2022/10/21 12:08:55 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t size)
{
	size_t			i;
	unsigned char	*memo;

	i = 0;
	memo = (unsigned char *)memoryBlock;
	while (i < size)
	{
		if (memo[i] == (unsigned char)searchedChar)
			return ((unsigned char *)(memoryBlock + i));
		i++;
	}
	return (NULL);
}
// int main() {

//     char data[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
//     const unsigned int size = 10;

//     // On recherche une valeur inhéxistante :
//     void * found = ft_memchr( data, 57, size );
//     printf( "57 is %s\n", ( found != NULL ? "found" : "not found" ) );

//     // On recherche une valeur existante :
//     found = ft_memchr( data, 50, size );
//     printf( "50 is %s\n", ( found != NULL ? "found" : "not found" ) );
//     if ( found != NULL ) {
// printf( "La valeur à la position calculée est %d\n", *((char *) found) );
//     }
// 	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};

// 		printf("%s", (char *)ft_memchr(tab, -1, 7));

//     return EXIT_SUCCESS;
// }
