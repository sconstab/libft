/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconstab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 14:12:51 by sconstab          #+#    #+#             */
/*   Updated: 2019/05/29 10:20:09 by sconstab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t i;

	i = 0;
	while (*h && i < len)
	{
		if (*h == *n)
			if (!ft_strncmp(h, n, len))
				return ((char *)h);
		i++;
	}
	return (NULL);
}
