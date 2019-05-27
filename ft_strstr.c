/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconstab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 13:57:04 by sconstab          #+#    #+#             */
/*   Updated: 2019/05/27 15:43:15 by sconstab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *h, const char *n)
{
	size_t i;
	size_t j;

	i = 0;
	if (n[0] == '\0')
		return ((char *)h);
	while (h[i] == '\0')
	{
		j = 0;
		while (h[i + j] == n[j])
		{
			if (n[j])
				return ((char *)&h[i]);
			j++;
		}
		i++;
	}
	return (0);
}
