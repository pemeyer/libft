/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 10:55:14 by pemeyer           #+#    #+#             */
/*   Updated: 2018/06/06 11:13:43 by pemeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*p;

	i = 0;
	p = s;
	if (n == 0)
	{
		return (p);
	}
	while (i < n)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
