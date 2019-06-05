/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconstab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 07:43:39 by sconstab          #+#    #+#             */
/*   Updated: 2019/06/05 08:11:45 by sconstab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	int		res;
	int		n;

	i = 0;
	res = 0;
	n = 1;
	while (str[i] < '0' || str[i] > '9')
	{
		if (str[i] == '-')
			n = -1;
		if (n == -1 && (str[i + 1] < '0' || str[i + 1] > '9'))
			return (0);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * n);
}
