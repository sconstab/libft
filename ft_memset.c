/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconstab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 16:31:58 by sconstab          #+#    #+#             */
/*   Updated: 2019/05/21 08:54:35 by sconstab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *dst;

	dst = b;
	while (len > 0)
	{
		*dst = (unsigned char)c;
		dst++;
		len--;
	}
	return (b);
}
