/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apcharpe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 14:30:44 by apcharpe          #+#    #+#             */
/*   Updated: 2020/02/13 12:37:09 by apcharpe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (NULL);
	if (dst < src)
	{
		i = 0;
		while (i < n)
			((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
		i++;
	}
	else
	{
		i = n;
		while (i > 0)
		{
			((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
			i--;
		}
		((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
	}
	return (dst);
}
