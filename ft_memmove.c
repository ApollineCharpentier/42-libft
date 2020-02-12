/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apcharpe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 14:30:44 by apcharpe          #+#    #+#             */
/*   Updated: 2020/02/11 19:02:35 by apcharpe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;
	size_t			i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	if (src < dst)
	{
		while (i < n)
			((unsigned char*)src)[i] = ((unsigned char*)dst)[i];
		i++;
	}
	else
	{
		tmp_dst = (unsigned char*)dst;
		tmp_src = (unsigned char*)src;
		while (i < n)
		{
			tmp_dst[i] = tmp_src[i];
			i++;
		}
	}
	return (dst);
}

int		main(void)
{
	char src[100] = "this is a test";
	char dst[1];

	ft_memmove(dst, src, 25);
	printf("%s\n", dst);
}
