/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 00:00:47 by gghaya            #+#    #+#             */
/*   Updated: 2022/10/21 12:08:32 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*allocation;

	allocation = (char *) malloc(count * size);
	if (allocation == 0)
		return (0);
	ft_bzero(allocation, count * size);
	return (allocation);
}
