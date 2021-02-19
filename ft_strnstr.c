/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghlee <sanghlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 18:34:50 by sanghlee          #+#    #+#             */
/*   Updated: 2021/02/20 03:01:45 by sanghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	b_len;
	size_t	l_len;
	size_t	size;

	b_len = ft_strlen(big);
	l_len = ft_strlen(little);
	if (little[0] == '\0')
		return ((char *)big);
	if (b_len > len)
		size = len;
	else
		size = b_len;
	while (size >= l_len)
	{
		if (ft_memcmp(big, little, l_len) == 0)
			return ((char *)big);
		big++;
		size--;
	}
	return (0);
}
