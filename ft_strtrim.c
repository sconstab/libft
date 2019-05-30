/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconstab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 09:44:06 by sconstab          #+#    #+#             */
/*   Updated: 2019/05/30 10:27:22 by sconstab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	e;
	size_t	it;
	char	*ns;

	i = 0;
	it = 0;
	e = ft_strlen(s);
	ns = ft_strnew(e + 1 * sizeof(ns));
	while (s[i])
	{
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			i++;
		else
			break ;
	}
	while (e > 0)
	{
		if (s[e] == ' ' || s[e] == '\n' || s[e] == '\t')
			e--;
		else
			break ;
	}
	while (i <= e)
		ns[it++] = s[i++];
	return (ns);
}
