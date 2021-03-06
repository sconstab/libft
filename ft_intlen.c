/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconstab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 06:41:27 by sconstab          #+#    #+#             */
/*   Updated: 2019/05/31 13:14:26 by sconstab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(long n)
{
	int c;

	c = 0;
	if (n < 0)
	{
		n = n * -1;
		c++;
	}
	while (n >= 1)
	{
		n = n / 10;
		c++;
	}
	return (c);
}
