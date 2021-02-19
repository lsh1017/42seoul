/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghlee <sanghlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 18:35:07 by sanghlee          #+#    #+#             */
/*   Updated: 2021/02/20 03:15:13 by sanghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str)
{
	long	nbr;
	long	sign;
	size_t	i;

	nbr = 0;
	sign = 1;
	i = 0;
	while ((str[i] != '\0') && (str[i] == ' ' || str[i] == '\n'
				|| str[i] == '\t' || str[i] == '\v' || str[i] == '\f'
				|| str[i] == '\r'))
		i++;
	if (str[i] == '-')
		sign = -1;
	if ((str[i] == '-') || (str[i] == '+'))
		i++;
	while ((str[i] != '\0') && (str[i] >= '0') && (str[i] <= '9'))
	{
		nbr = (nbr * 10) + str[i] - '0';
		i++;
	}
	if (nbr > 2147483647 && sign == 1)
		return (-1);
	else if (nbr > 2147483648 && sign == -1)
		return (0);
	return (sign * nbr);
}
