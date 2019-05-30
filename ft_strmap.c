/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconstab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 16:38:21 by sconstab          #+#    #+#             */
/*   Updated: 2019/05/30 08:06:38 by sconstab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*ns;

	i = -1;
	ns =  malloc(sizeof(ns) * ft_strlen(s) + 1);
	while (s[++i])
		ns[i] = f(s[i]);
	return (ns);
}
