/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemmanue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 15:31:09 by bemmanue          #+#    #+#             */
/*   Updated: 2021/04/22 15:51:13 by bemmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t len)
{
	const char	*s;

	s = src;
	if (len == 0)
		return (ft_strlen(s));
	while (*s != '\0')
	{
		if (len != 1)
		{
			*dst++ = *s;
			len--;
		}
		s++;
	}
	*dst = '\0';
	return (s - src);
}
