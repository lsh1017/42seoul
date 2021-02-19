/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghlee <sanghlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 18:35:18 by sanghlee          #+#    #+#             */
/*   Updated: 2021/02/20 06:02:16 by sanghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memset(void *dst, int c, size_t n)
{
	unsigned char	*ndst;
	unsigned char	src;
	size_t			i;

	ndst = (unsigned char *)dst;
	src = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		*ndst++ = src;
		i++;
	}
	return (dst);
}
