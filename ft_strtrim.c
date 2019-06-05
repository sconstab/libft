/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconstab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 09:44:06 by sconstab          #+#    #+#             */
/*   Updated: 2019/06/05 10:40:44 by sconstab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	e;
	size_t	it;

	if (!s)
		return (NULL);
	i = 0;
	it = 0;
	e = ft_strlen(s) - 1;
	while (s[i] && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
			i++;
	if (i >= e)
		return (ft_strnew(1));
	while (s[e] == ' ' || s[e] == '\n' || s[e] == '\t')
			e--;
	it = e - i + 1;
	return (ft_strsub(s, i, it));
}
