/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperrin <sperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 12:53:31 by sperrin           #+#    #+#             */
/*   Updated: 2020/07/03 11:21:43 by sperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_intlen(unsigned int n)
{
	if (n >= 10)
		return (1 + ft_intlen(n / 10));
	return (1);
}

int		ft_abs(int nbr)
{
	return ((nbr < 0) ? -nbr : nbr);
}

char	*ft_itoa(int n)
{
	char			*ret;
	int				sign;
	unsigned int	nb;
	size_t			len;

	sign = (n < 0) ? 1 : 0;
	nb = ft_abs(n);
	len = ft_intlen(nb) + sign;
	ret = (char *)malloc(sizeof(char) * len + 1);
	if (ret == NULL)
		return (NULL);
	ret[len] = '\0';
	while (len-- > (unsigned int)sign)
	{
		ret[len] = nb % 10 + '0';
		nb /= 10;
	}
	if (sign == 1)
		ret[len] = '-';
	return (ret);
}
