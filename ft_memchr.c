/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apcharpe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 15:25:09 by apcharpe          #+#    #+#             */
/*   Updated: 2020/02/10 16:20:30 by apcharpe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char*)str)[i] == ((unsigned char)c))
			return (&((unsigned char*)str)[i]);
		i++;
	}
	return (0);
}

int		main(void)
{
	char str[100] = "this is a test";
	char *p;

	p = ft_memchr(str, 'a', 20);
	printf("%s\n", p);
}
