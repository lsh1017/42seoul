/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghlee <sanghlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 18:35:44 by sanghlee          #+#    #+#             */
/*   Updated: 2021/02/20 06:51:42 by sanghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ndst;
	unsigned char	*nsrc;

	if (dst == src || len == 0)
		return (dst);
	if (dst < src)
	{
		ndst = (unsigned char *)dst;
		nsrc = (unsigned char *)src;
		while (len--)
			*ndst++ = *nsrc++;
	}
	else
	{
		ndst = (unsigned char *)dst + (len - 1);
		nsrc = (unsigned char *)src + (len - 1);
		while (len--)
			*ndst-- = *nsrc--;
	}
	return (dst);
}
