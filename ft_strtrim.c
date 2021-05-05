/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemmanue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 17:59:53 by bemmanue          #+#    #+#             */
/*   Updated: 2021/04/28 19:15:23 by bemmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*ft_fcut(char const *s1, char const *set)
{
	size_t	i;
	size_t	count;

	while (*s1 != '\0')
	{
		i = 0;
		count = 0;
		while (set[i] != '\0')
		{
			if (*s1 == set[i])
			{
				s1++;
				count++;
			}
			i++;
		}
		if (!count)
			return ((char *)s1);
	}
	return ((char *)s1);
}

static const char	*ft_lcut(const char *s1, char const *set)
{
	size_t		i;
	size_t		l;
	size_t		count;
	const char	*copy;

	l = ft_strlen(s1);
	copy = s1 + l - 1;
	while (l != 0)
	{
		i = 0;
		count = 0;
		while (set[i] != '\0')
		{
			if (*copy == set[i])
			{
				copy--;
				count++;
			}
			i++;
		}
		if (!count)
			return ((char *)copy);
		l--;
	}
	return ((char *)copy);
}

char	*ft_strtrim(const char *s1, char const *set)
{
	char	*str;
	size_t	len;

	len = ft_lcut(s1, set) - ft_fcut(s1, set) + 1;
	str = ft_substr(ft_fcut(s1, set), 0, len);
	return (str);
}
