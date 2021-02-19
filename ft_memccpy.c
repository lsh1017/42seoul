/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghlee <sanghlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 15:54:45 by sanghlee          #+#    #+#             */
/*   Updated: 2021/02/10 15:56:41 by sanghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*ndst;
	unsigned char	*nsrc;
	unsigned char	find;
	size_t			i;

	ndst = dst;
	nsrc = (unsigned char *)src;
	find = c;
	i = 0;
	while (i < n)
	{
		ndst[i] = nsrc[i];
		if (nsrc[i] == find)
			return (dst + (i + 1));
		i++;
	}
	return (0);
}
