/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconstab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:56:27 by sconstab          #+#    #+#             */
/*   Updated: 2019/05/24 07:32:18 by sconstab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*csrc;
	char	*cdst;
	char	*lsrc;
	char	*ldst;

	csrc = (char *)src;
	cdst = (char *)dst;
	if (cdst < csrc)
		while (len--)
			*cdst++ = *csrc++;
	else
	{
		lsrc = csrc + (len - 1);
		ldst = cdst + (len - 1);
		while (len--)
			*ldst-- = *lsrc--;
	}
	return (dst);
}
