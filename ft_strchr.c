/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apcharpe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 15:06:48 by apcharpe          #+#    #+#             */
/*   Updated: 2020/02/07 14:15:10 by apcharpe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*tmp;

	i = 0;
	tmp = (char*)s;
	while (tmp[i] || (tmp[i] == '\0' && (char)c == '\0'))
	{
		if (tmp[i] == (char)c)
			return ((char*)&tmp[i]);
		i++;
	}
	return (0);
}

int		main(void)
{
	printf("%s\n", ft_strchr("bonjour", 106));
	return (0);
}
