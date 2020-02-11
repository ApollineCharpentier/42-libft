/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apcharpe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 13:02:30 by apcharpe          #+#    #+#             */
/*   Updated: 2020/02/07 14:26:56 by apcharpe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t size_src;

	i = 0;
	size_src = 0;
	if (!dst || !src)
		return (0);
	while (src[size_src] != '\0')
		size_src++;
	if (size == 0)
		return (size_src);
	while (i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (size_src);
}

int		main(int ac, char **av)
{
	(void)ac;
	printf("%zu\n", ft_strlcpy(av[1], av[2], atoi(av[1])));
	return (0);
}
