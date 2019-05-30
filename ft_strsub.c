/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconstab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 09:17:06 by sconstab          #+#    #+#             */
/*   Updated: 2019/05/30 09:30:10 by sconstab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *ns;

	ns = malloc(len * sizeof(ns));
	if (ns == NULL)
		return (NULL);
	ft_strncpy(ns, s + start, len);
	return (ns);
}
