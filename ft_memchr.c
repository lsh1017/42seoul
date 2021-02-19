/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghlee <sanghlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 18:35:55 by sanghlee          #+#    #+#             */
/*   Updated: 2021/02/20 06:54:25 by sanghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *b, int c, size_t n)
{
	while (n)
	{
		if (*(unsigned char *)b == (unsigned char)c)
			return ((void *)b);
		b++;
		n--;
	}
	return (0);
}
