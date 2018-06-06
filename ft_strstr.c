/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 07:52:01 by pemeyer           #+#    #+#             */
/*   Updated: 2018/06/06 12:00:24 by pemeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strstr(const char *s, const char *subs)
{
	size_t n;

	if (!*subs)
		return ((char *)s);
	n = ft_strlen(subs);
	while (*s)
		if (!ft_memcmp(s++, subs, n))
			return ((char *)s - 1);
	return (NULL);
}
