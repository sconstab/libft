/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconstab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 08:26:22 by sconstab          #+#    #+#             */
/*   Updated: 2019/06/05 08:45:00 by sconstab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**sa;
	size_t	x;

	x = 0;
	sa = malloc(ft_wordcount(s, c) * sizeof(sa));
	while (x < ft_wordcount(s, c))
	{
		sa[x] = ft_strnew(ft_strcnlen(s, c, x));
		x++;
	}
	x = 0;
	while (x < ft_wordcount(s, c))
	{
		sa[x] = ft_strcreturn(s, c, x);
		x++;
	}
	return (sa);
}
