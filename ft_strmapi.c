/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconstab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 07:53:42 by sconstab          #+#    #+#             */
/*   Updated: 2019/05/30 08:10:01 by sconstab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*ns;

	i = -1;
	ns = malloc(ft_strlen(s) * sizeof(ns) + 1);
	while (s[++i])
		ns[i] = f(i, s[i]);
	return (ns);
}
