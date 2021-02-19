/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghlee <sanghlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 18:35:29 by sanghlee          #+#    #+#             */
/*   Updated: 2021/02/10 15:50:54 by sanghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_bzero(void *b, size_t n)
{
	unsigned char	*dst;
	size_t			i;

	dst = b;
	i = 0;
	while (i < n)
	{
		dst[i] = 0;
		i++;
	}
}
