/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:35:22 by gghaya            #+#    #+#             */
/*   Updated: 2022/10/21 12:09:07 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dstt;
	char	*srcc;
	size_t	i;

	dstt = (char *)dest;
	srcc = (char *)src;
	i = 0;
	if (dest != 0 || src != 0)
	{
		if (dstt > srcc)
		{
			while (i < n)
			{
				dstt[n - i - 1] = srcc[n - i - 1];
				i++;
			}
		}
		while (i < n)
		{
			dstt[i] = srcc[i];
			i++;
		}
		return (dstt);
	}
	return (0);
}
/*
int main ()
{
	char k[]  = "imane";
	char kk[] = "ghizla";
	int s[10] = {1,2,3,4,8};
	int n[10] = {2,4,1,8};
	int a1[10];
	int i = 0;
	printf("%s",ft_memmove(k, k+2, sizeof(char)*2));
	ft_memmove(k, k+2, sizeof(char)*2);
	for(i=0;i<5;i++)
	{
		printf("%d \n", (int )memmove(s, a1, sizeof(int)*2));
	}
}*/
