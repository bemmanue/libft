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

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	l;

	l = ft_strlen(src);
	if (!src)
		return (l);
	while (dstsize-- != 0)
	{
		*dst = *src;
		if (*src == '\0')
			return (l);
		if (dstsize == 0)
		{
			*dst = '\0';
			return (l);
		}
		dst++;
		src++;
	}
	return (l);
}
