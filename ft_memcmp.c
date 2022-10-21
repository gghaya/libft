/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 12:16:16 by gghaya            #+#    #+#             */
/*   Updated: 2022/10/21 12:16:19 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(void * pointer1, void * pointer2, size_t size )
{
	unsigned char *	ptr1;
	unsigned char *	ptr2;
	size_t	i = 0;

	ptr1 = (unsigned char *)pointer1;
	ptr2 = (unsigned char *)pointer2;
	while(i < size)
	{
		if (ptr1[i] != ptr2[i])
			return(ptr1[i]-ptr2[i]);
		i++;

	}
	return(0);
}
// int main()
// {
// int array1 [] = { 54, 85, 20, 63, 21 };
//     int array2 [] = { 54, 85, 19, 63, 21 };
//     size_t size = sizeof( int ) * 5;

//     printf("%d=%d\n" ,memcmp( array1, array2, size) ,ft_memcmp( array1, array2, size) );
//     printf("%d=%d\n"  , memcmp( array1, array1, size)  ,ft_memcmp( array1, array1, size) );
//     printf( "%d=%d\n", memcmp( array2, array1, size)  ,ft_memcmp( array2, array1, size) );

//     printf( "Test is ok\n" );
// }
