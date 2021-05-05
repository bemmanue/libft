/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemmanue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 17:49:41 by bemmanue          #+#    #+#             */
/*   Updated: 2021/05/04 17:49:54 by bemmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_neg(char *str, int n, int i)
{
	int	e;

	e = i;
	*str = '-';
	while (--i != 0)
	{
		str[i] = -(n % 10) + 48;
		n /= 10;
	}
	str[e] = '\0';
	return (str);
}

static char	*ft_pos(char *str, int n, int i)
{
	int	e;

	e = i;
	while (i != 0)
	{
		str[--i] = n % 10 + 48;
		n /= 10;
	}
	str[e] = '\0';
	return (str);
}

static int	ft_count(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		i++;
	if (n == 0)
		return (++i);
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;

	str = malloc(sizeof(str) * ft_count(n) + 1);
	if (str == NULL)
		return (NULL);
	if (n < 0)
		return (ft_neg(str, n, ft_count(n)));
	else
		return (ft_pos(str, n, ft_count(n)));
}
