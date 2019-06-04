/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconstab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 10:27:58 by sconstab          #+#    #+#             */
/*   Updated: 2019/06/01 10:01:34 by sconstab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**sa;
	char	*ns;
//	char	*tf;
//	size_t	x;
	size_t	y;
//	size_t	z;

//	x = 0;
	y = 0;
//	z = 0;
	sa = NULL;
	ns = (char *)s;
	ns = ft_strctrim(ns, c);
	sa[y] = ft_strnew(ft_strclen(ns, c));
	ft_strncpy(sa[y], ns, ft_strclen(ns, c));
	return (sa);
}