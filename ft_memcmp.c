/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apcharpe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 16:01:07 by apcharpe          #+#    #+#             */
/*   Updated: 2020/02/10 16:47:48 by apcharpe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (((const unsigned char *)s1)[i] != ((const unsigned char *)s2)[i])
			return (((const unsigned char *)s1)[i]
						- ((const unsigned char *)s2)[i]);
			i++;
	}
	return (0);
}

int	main(void)
{
	char	s1[20] = "hello";
	char	s2[20] = "HELL";
	int		c;

	c = ft_memcmp(s1, s2, 20);
	printf("%d\n", c);
}
