/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperrin <sperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 13:56:07 by sperrin           #+#    #+#             */
/*   Updated: 2020/07/07 08:16:08 by sperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	long_int(long int negative)
{
	if (negative == -1)
		return (0);
	return (-1);
}

int	ft_atoi(const char *str)
{
	int						i;
	int						negative;
	unsigned long int		number;

	i = 0;
	negative = 1;
	number = 0;
	while ((str[i] == ' ' && str[i] >= '\t') || (str[i] <= '\r'))
		i++;
	if (str[i] == '-')
		negative = -1;
	if (negative == -1 || str[i] == '+')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			number = number * 10 + str[i] - '0';
		else
			break ;
		i++;
	}
	if (number > 9223372036854775807)
		return (long_int(negative));
	return (negative * number);
}
