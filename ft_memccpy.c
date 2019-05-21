/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconstab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 17:07:43 by sconstab          #+#    #+#             */
/*   Updated: 2019/05/21 17:23:17 by sconstab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy \
	(void *restrict dst, const void *restrict src, int c, size_t n)
{
	unsigned char	*csrc;
	unsigned char	*cdst;
	int				i;

	csrc = (unsigned char *)src;
	cdst = (unsigned char *)dst;
	i = 0;
	cdst[i] = csrc[i];
	while (i < n && csrc[i] != c)
	{
		i++;
		cdst[i] = csrc[i];
	}
	return (dst);
}
