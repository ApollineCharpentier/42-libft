/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apcharpe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 15:09:16 by apcharpe          #+#    #+#             */
/*   Updated: 2020/02/13 14:15:32 by apcharpe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_abs(int n)
{
	return ((unsigned int)(n < 0 ? -n : n));
}

static unsigned int	ft_size(unsigned int n)
{
	unsigned int size;

	size = 0;
	n = ft_abs(n);
	while (n / 10 > 0)
	{
		n /= 10;
		size++;
	}
	return (size + 1);
}

char				*ft_itoa(int n)
{
	char			*str;
	unsigned int	nb;
	unsigned int	size;

	nb = ft_abs(n);
	size = ft_size(nb) + 1 + (n < 0 ? 1 : 0);
	if (!(str = (char*)malloc(sizeof(char) * (size + 1))))
		return (0);
	str[size - 1] = '\0';
	if (n == 0)
		str[0] = '\0';
	if (n < 0)
		str[0] = '-';
	while (nb > 0)
	{
		str[size - 2] = nb % 10 + '0';
		nb /= 10;
		size--;
	}
	return ((char *)str);
}
