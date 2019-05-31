/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconstab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 09:44:06 by sconstab          #+#    #+#             */
/*   Updated: 2019/05/31 14:31:26 by sconstab         ###   ########.fr       */
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
	e = ft_strlen(s) - 1;
	ns = ft_strnew(e + 1);
	if (s == NULL)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			i++;
	while (s[e] == ' ' || s[e] == '\n' || s[e] == '\t')
			e--;
	e++;
	while (i < e && s[i])
		ns[it++] = s[i++];
	return (ns);
}
