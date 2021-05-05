/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemmanue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 18:40:58 by bemmanue          #+#    #+#             */
/*   Updated: 2021/04/28 19:02:38 by bemmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;

	i = 0;
	if (start < ft_strlen(s))
	{
		while (start-- > 0)
			s++;
		if (len < ft_strlen(s))
			sub = malloc(sizeof(*sub) * len + 1);
		else
			sub = malloc(sizeof(*sub) * ft_strlen(s) + 1);
		if (sub == NULL)
			return (NULL);
		while (len != 0)
		{
			len--;
			sub[i] = s[i];
			i++;
		}
		sub[i] = '\0';
		return (sub);
	}
	return ("");
}
