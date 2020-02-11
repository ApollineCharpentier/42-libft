/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apcharpe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 16:06:47 by apcharpe          #+#    #+#             */
/*   Updated: 2020/02/07 14:27:55 by apcharpe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	char		*tmp;

	i = 0;
	tmp = (char*)s;
	while (tmp[i])
		i++;
	while (i >= 0)
	{
		if (tmp[i] == (char)c)
			return (&tmp[i]);
		i--;
	}
	return (0);
}

int		main(void)
{
	printf("%s\n", ft_strrchr("bonjour", 'o'));
	return (0);
}
