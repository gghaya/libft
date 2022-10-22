/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gghaya <gghaya@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 14:35:12 by gghaya            #+#    #+#             */
/*   Updated: 2022/10/22 15:11:41 by gghaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"libft.h"

static size_t	ft_numlen(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
	{
		n *= -1;
		len++;
	}
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*str;
	size_t		len;
	long long	longn;

	len = ft_numlen(n);
	str = malloc(len + 1);
	longn = (long long)n;
	if (!str)
		return (0);
	if (longn < 0)
	{
		longn *= -1;
		str[0] = '-';
	}
	str[len] = '\0';
	while (longn)
	{
		str[--len] = (longn % 10) + 48;
		longn /= 10;
	}
	return (str);
}
// int main()
// {
// 	printf("%s",ft_itoa(-623));
// }
